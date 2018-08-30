#include <stdio.h>

int    p(void)
{
    char            buf[64];
    unsigned int    *addr;          // esp

    fflush(stdout);
    gets(buf);
    addr = &buf[80];
    if ((addr & (unsigned int *)0xb0000000) == 0xb0000000)
    {
        printf("(%p)\n", addr);
        exit(0);
    }
    puts(buf);
    return ((int)ft_strdup(buf));
}

int     main(void)
{
    return (p());
}