/*
** EPITECH PROJECT, 2018
** SOURCES // ROOT
** File description:
** bsq.c
*/

#include "sources.h"

int print_map(char *map)
{
    if (my_putstr(map, STDOUT_FILENO) == EXIT_ERROR)
        return (EXIT_ERROR);
    if (my_putstr("\n", STDOUT_FILENO) == EXIT_ERROR)
        return (EXIT_ERROR);
    return (EXIT_SUCCESS);
}

int bsq(char *filepath)
{
    char *buffer = get_content(filepath);

    if (!buffer)
        return (EXIT_ERROR);
    // check map
    // init int **
    // algo
    if (print_map(buffer) == EXIT_ERROR)
        return (EXIT_ERROR);
    return (EXIT_SUCCESS);
}