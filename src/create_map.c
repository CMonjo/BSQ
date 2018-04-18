/*
** EPITECH PROJECT, 2017
** BSQ
** File description:
** Create map file
*/

#include "main.h"

void move_to_int(sys_t *sys)
{
	int i = 0;

	sys->map_int = malloc(sizeof(int *) * sys->len_map);
	while (sys->map[i] != '\0') {
		if (sys->map[i] == '.')
			sys->map_int[i] = 1;
		if (sys->map[i] == 'o')
			sys->map_int[i] = 0;
		i++;
	}
	sys->map_int[i] = -1;
}
