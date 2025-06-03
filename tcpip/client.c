#include "header.h"
int main(int argc, char** argv){
	if(argc!=3){
		printf("USAGE: ./c portNum IP_Addr\n");
		return 0;
	}
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
server_id.sin_port = htons(atoi(argv[1]));
server_id.sin_addr.s_addr = inet_addr(argv[2]);

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
printf("-----------------------------\n");
/*
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
*/

int arr[20] = {0};
printf("enter two number: ");
scanf("%d %d", &arr[0], &arr[1]);
write(sfd, arr, sizeof(int)*2);
sleep(1);

read(sfd, arr, sizeof(arr));
for(int i = 0; i<=arr[0]; i++){
	printf("%d ", arr[i]);
}
printf("\n");

close(sfd);
}
