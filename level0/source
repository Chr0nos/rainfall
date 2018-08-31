#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#define SHELL "/bin/sh"

int		main(int ac, char **av, char **env)
{
	int			gid;					// 4
	int			uid;					// 4
	int			x;						// 4
	char		*shell;					// 8	(total: 20)

	if (atoi(av[1]) == 423)
	{
		shell = strdup(SHELL);
		gid = getegid();
		uid = geteuid();
		setresgid(gid, gid, gid);
		setresuid(uid, uid, uid);
		execv(shell, env);
	}
	else
		fwrite("No !\n", 1, 5, STDERR_FILENO);
	return (0);
}
