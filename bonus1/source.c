#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int     main(int ac, char *av)
{
    char        buf[40];
    int         n = atoi(av[1]);

    if (n > 9)
        return (EXIT_FAILURE);
    memcpy(buf, av[2], n * 4); // 0x08048453 <+47>:    lea    0x0(,%eax,4),%ecx
    if (n == 0x574f4c46)
        execl("/bin/sh", "sh", NULL);
    return (EXIT_SUCCESS);
}
