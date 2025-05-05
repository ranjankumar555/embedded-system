#include <sys/stat.h>
#include <sys/types.h>
#include <stdio.h>

int main() {
    int result = mkdir("myfolder", 0755);
    if (result == 0)
        printf("Directory created.\n");
    else
        perror("mkdir failed");

    return 0;
}

