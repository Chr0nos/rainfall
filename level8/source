#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

char    buff[160];
char    *service;

int     main()
{
    char    *str;

    while (1)
	{
		printf("(%p), (%p) \n", buff, service);
		if (fgets(buff, 128, stdin) == NULL)
            break ;
		if(strncmp("auth ",buff, 5) == 0)
		{
            str = malloc(4);
			if(strlen(buff) != 0)
				strcpy(str, buff + 5);
		}
		if (strncmp("reset", buff, 5) == 0)
			free(str);
		if (strncmp("service", buff, 6) == 0)
			service = strdup(buff + 7);
		if (strncmp("login", buff, 5) == 0)
		{
			if (service[32] != 0)
				system("/bin/sh");
			else
				fwrite("Password:\n", 10, 1, stdout);
		}
	}
}
