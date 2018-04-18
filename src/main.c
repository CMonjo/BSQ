/*
** EPITECH PROJECT, 2017
** BSQ
** File description:
** Main file
*/

#include "main.h"

void init(sys_t *sys, struct stat *my_stat, char const *filepath)
{
	sys->map = open_map(filepath, my_stat, sys);
	sys->map = sys->map + calc_lign(sys);
	sys->len_map = my_strlen(sys->map);
	sys->map[sys->len_map] = '\0';
	check_map(sys);
	sys->len_lign = calc_lign(sys);
	if (check_lign(sys) == 1)
		mapHave1l(sys);
	else {
		move_to_int(sys);
		my_bsq(sys);
	}
}

int main(int ac, char **av)
{
	sys_t *sys = malloc(sizeof(sys_t));
	struct stat *my_stat = malloc(sizeof(struct stat));
	char const *filepath = av[1];

	if (ac != 2)
		return (84);
	if (my_strlen(av[1]) == 2 && av[1][0] == '-' && av[1][1] == 'h')
		print_h(my_stat);
	else
		init(sys, my_stat, filepath);
	return (0);
}
