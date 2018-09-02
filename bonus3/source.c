/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   source.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snicolet <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 19:38:41 by snicolet          #+#    #+#             */
/*   Updated: 2018/09/02 12:24:09 by snicolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

#define PASS_FILE "/home/user/end/.pass"

int		main(int ac, char **av)
{
	FILE	*f;
	char	pass[66];

	f = fopen(PASS_FILE, "r");
	if  ((!f) || (arc < 2))
		return (-1);
	fread(pass, 1, 66, f);
	pass[65] = '\0';
	pass[atoi(argv[1])] = 0;
	fread(somewhere, 1, 0x41, f);
	fclose(f);
	if (!strcmp(pass, argv[1]) == 0)
		execl("/bin/sh", "sh", NULL);
	else
		puts("");
	return (0);
}
