/*
** EPITECH PROJECT, 2017
** BSQ
** File description:
** Handling lign file
*/

#include "main.h"

int calc_lign(sys_t *sys)
{
	int i = 0;

	while (sys->map[i] != '\n')
		i++;
	i = i + 1;
	return (i);
}

int check_lign(sys_t *sys)
{
	int i = 0;
	int count = 0;

	while (sys->map[i] != '\0') {
		if (sys->map[i] == '\n')
			count++;
		i++;
	}
	return (count);
}

int check_map(sys_t *sys)
{
	int i = 0;

	while (sys->map[i] != '\0') {
		if (sys->map[i] == '.' || sys->map[i] == 'o' ||
		sys->map[i] == '\n' || sys->map[i] == '\0')
			i++;
		else
			exit (84);
	}
	return (0);
}
