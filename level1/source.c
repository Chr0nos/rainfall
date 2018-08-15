#include <stdio.h>
#include <stdlib.h>

// 0x08048444
void	run(void)
{
	fwrite("Good... Wait what?\n");
	system("/bin/sh");
}

// 0x08048480
int		main(void)
{
	char	buf[76];

	gets(buf);
	return (0);
}
