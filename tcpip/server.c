#include "header.h"
int main(int argc, char** argv){
	if(argc!=3){
		printf("USAGE: ./server port ip_addr\n");
		return 0;
	}
	// create socket
	int sfd =  socket(AF_INET, SOCK_STREAM, 0);
	if(sfd<0){
		perror("socket");
		return 0;
	}
	perror("socket");

	// bind host and ip address
	struct sockaddr_in server_id, client_id;
	int len;
	server_id.sin_family = AF_INET;
	server_id.sin_port = htons(atoi(argv[1]));
	server_id.sin_addr.s_addr = inet_addr(argv[2]);

	len = sizeof(server_id);
	int bnd =  bind(sfd, (struct sockaddr*)&server_id, len);
	if(bnd<0){
		perror("bind");
		return 0;
	}
	perror("bind");

	// listen 
	int lst = listen(sfd, 5);
	if(lst<0){
		perror("listen");
		return 0;
	}
	perror("listen");

	// Accecpt
	printf("waiting for client...\n");
	int nsfd = accept(sfd, (struct sockaddr *)&client_id, &len);
	if(nsfd<0){
		perror("accept");
		return 0;
	}
	perror("accept");
	printf("client request Accepted\n");

	int i;
	char s[50];
	while(1){
		read(nsfd, s, sizeof(s));
		printf("client: %s\n", s);
		if(strcmp(s,"bye")==0){
			break;
		}
		for(i = 0; s[i]; i++){
			s[i] = s[i]^32;
		}

		write(nsfd, s, strlen(s)+1);

	}

	close(sfd);
	close(nsfd);
}
