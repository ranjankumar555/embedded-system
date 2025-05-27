#include "header.h"
int main(){
/*int r=mkfifo("f1", 0664);
if(r<0){
perror("mkfifo");
exit(EXIT_FAILURE);
}
printf("r = %d\n", r);
printf("Before...\n");
*/
int fd = open("f1", O_RDONLY);
if(fd<0){
perror("open");
exit(EXIT_FAILURE);
}
char s[10];
read(fd, s, sizeof(s));
printf("rcvd data: %s\n",s);

return 0;

}


