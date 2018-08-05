#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#define SHELL "/bin/sh"

int		main(int ac, char **av, char **env)
{
	char		*shell;					// 8
	int			x[3];					// 12 more (total: 20)

	if (atoi(av[1]) == 423)
	{
		shell = strdup(SHELL);
		x[0] = getegid();
		x[1] = geteuid();
		// setresgid();
		execv("/bin/sh", env);
	}
	return (0);
}
