/*
** EPITECH PROJECT, 2017
** Main
** File description:
** Header file
*/

#ifndef MAIN_H_
	#define MAIN_H_
	#include <stdlib.h>
	#include <stdio.h>
	#include <unistd.h>
	#include <stdarg.h>
	#include <math.h>
	#include <stdio.h>
	#include <stdlib.h>
	#include <sys/types.h>
	#include <sys/stat.h>
	#include <dirent.h>
	#include <time.h>
	#include <stdlib.h>
	#include <stdarg.h>
	#include <string.h>
	#include <fcntl.h>
	#include "my.h"
	#include "struct.h"
	char *open_map(char const *filepath, struct stat *my_stat, sys_t *sys);
	int print_h(struct stat *my_stat);
	int calc_lign(sys_t *sys);
	int check_map(sys_t *sys);
	void move_to_int(sys_t *sys);
	void my_bsq(sys_t *sys);
	void compare_str(sys_t *sys);
	void printing_x(sys_t *sys);
	void mapHave1l(sys_t *sys);
	int check_lign(sys_t *sys);
#endif
