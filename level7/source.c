#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

char *file;

int m()
{
    int i;

    i = time(NULL);
    printf("%s - %d\n", file, i);
}

// a void * in 32 bits = 4 bytes

int main(int ac, char **av)
{
    FILE *f;
    char *ptr[4]; // 16 (total: 20)

    ptr[0] = malloc(8);
    ptr[1] = malloc(8);
    ptr[2] = malloc(8);
    ptr[3] = malloc(8);
    strcpy(ptr[0], av[1]);
    strcpy(ptr[3], av[2]);
    f = fopen("/home/user/level8/.pass", "r");
    fgets(file, 0x44, f);
    puts("~~");
    return (0);
}
