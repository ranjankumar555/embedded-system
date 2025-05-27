#include "header.h"
#include <fcntl.h>
int main(){
	int p[2];
	int r = pipe2(p, O_NONBLOCK);
	char ch = 'a';
	int c = 0;
	while(write(p[1], &ch, 1) != -1) // Blocked, when pipe is full
	printf("%d\n", c++);
	printf("%d\n", c);
	printf("Done...\n");

	return 0;
}
