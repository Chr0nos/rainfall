#include <string.h>
#include <unistd.h>

// le code original semble etre en C++, donc ce code ne sera pas aussi
// exaustif que les autres.

struct      truc {
    char    buf[100];
    int     value;
    int     useless;
};

int         main(int ac, char **av)
{
    struct truc        alpha;
    struct truc        bravo;

    if (ac < 2)
        _exit(1);
    alpha.value = 5;
    bravo.value = 6;
    memcpy(alpha.buf, av[1], strlen(av[1]));
    return (alpha.value + bravo.value);
}
