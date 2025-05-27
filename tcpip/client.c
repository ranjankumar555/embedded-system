#include "header.h"
int main(){
// create socket
int sfd =  socket(AF_INET, SOCK_STREAM, 0);
struct sockaddr_in server_id, client_id;
int len;
if(sfd<0){
	perror("socket");
	return 0;
}
perror("socket");

// fill the structure
server_id.sin_family = AF_INET;
server_id.sin_port = htons(4000);
server_id.sin_addr.s_addr = inet_addr("192.168.2.165");

len = sizeof(server_id);

// connect
printf("waiting for client...\n");
int c = connect(sfd, (struct sockaddr *)&server_id, len);
if(c<0){
	perror("connect");
	return 0;
}
perror("connect");
printf("connected to server...\n");

char s[50];
while(1){
printf("server: ");
scanf("%s", s);
if(strcmp(s,"bye") == 0)
	break;
write(sfd, s, strlen(s)+1);
sleep(1);
read(sfd, s, sizeof(s));
printf("updated data: %s\n", s);

}

close(sfd);
}
