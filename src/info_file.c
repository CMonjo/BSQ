/*
** EPITECH PROJECT, 2017
** BSQ
** File description:
** Info open file
*/

#include "main.h"

char *open_map(char const *filepath, struct stat *my_stat, sys_t *sys)
{
	int fd = 0;
	int rd = 0;
	char *buffer;

	fd = open(filepath, O_RDONLY);
	stat(filepath, my_stat);
	buffer = malloc(sizeof(char *) * my_stat->st_size + 1);
	sys->map = malloc(sizeof(char *) * my_stat->st_size + 1);
	if (buffer == NULL)
		exit (84);
	rd = read(fd, buffer, my_stat->st_size + 1);
	if (rd <= 0)
		exit (84);
	close(fd);
	return (buffer);
}

int print_h(struct stat *my_stat)
{
	int fd = 0;
	int rd = 0;
	char *buffer;

	fd = open("txt/info.txt", O_RDONLY);
	stat("txt/info.txt", my_stat);
	buffer = malloc(sizeof(char *) * my_stat->st_size + 1);
	rd = read(fd, buffer, my_stat->st_size);
	if (rd <= 0)
		return (84);
	write(1, buffer, rd);
	return (0);
}
