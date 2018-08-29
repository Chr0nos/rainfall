#include <string.h>
#include <stdlib.h>

int p(char *str, char *pat)
{
    char buff[4069];

	puts(pat);
	read(0, buff, 4069);
	char *oui = strchr(buff, '\n');
	oui[0] = 0;
	strncpy(str, buff, 20);
}

int pp(char *str)
{
	char str1[20];
	char str2[20];

	p(str1," - ");
	p(str2," - ");
	strcpy(str, str1);
	int i = strlen(str);
	str[i] = ' ';            //movzwl (%ebx),%edx
	strcat(str, str2);
}

int main(void)
{
    char str[42];

	pp(str);
    puts(str);
    return (EXIT_SUCCESS);
}
