/*
** EPITECH PROJECT, 2017
** BSQ
** File description:
** BSQ algo file
*/

#include "main.h"

void mapHave1l(sys_t *sys)
{
	int i = 0;

	while (sys->map[i] != '\0') {
		if (sys->map[i] == '.')
			break;
		i++;
	}
	if (sys->map[i] == '.')
		sys->map[i] = 'x';
	write(1, sys->map, sys->len_map);
}

void printing_x(sys_t *sys)
{
	int tmp = sys->max;
	int sv_pos = sys->pos_max;
	int sv_max = sys->max;

	while (sys->max != 0) {
		while (tmp != 0) {
			sys->map[sys->pos_max] = 'x';
			sys->pos_max--;
			tmp--;
		}
		sv_pos = sv_pos - sys->len_lign;
		sys->pos_max = sv_pos;
		tmp = sv_max;
		sys->max--;
	}
}

void found_max(sys_t *sys)
{
	int i = 0;

	sys->max = sys->map_int[i];
	sys->pos_max = i;
	while (sys->map_int[i] != -1) {
		if (sys->map_int[i] > sys->max) {
			sys->max = sys->map_int[i];
			sys->pos_max = i;
		}
		i++;
	}
}

void compare_str(sys_t *sys)
{
	int tmp = sys->map_int[sys->ib - 1];

	if (sys->map_int[sys->ib - sys->len_lign] < tmp)
		tmp = sys->map_int[sys->ib - sys->len_lign];
	else if (sys->map_int[sys->ib - sys->len_lign - 1] < tmp)
		tmp = sys->map_int[sys->ib - sys->len_lign - 1];
	sys->map_int[sys->ib] = tmp + 1;
}

void my_bsq(sys_t *sys)
{
	sys->ib = sys->len_lign + 1;
	while (sys->map_int[sys->ib] != -1) {
		if (sys->map_int[sys->ib] != 0)
			compare_str(sys);
		sys->ib++;
	}
	found_max(sys);
	printing_x(sys);
	write(1, sys->map, sys->len_map);
}
