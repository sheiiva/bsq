/*
** EPITECH PROJECT, 2020
** SOURCES // ROOT
** File description:
** bsq.c
*/

#include "sources.h"

int print_map(char *map)
{
    int i = 0;

    while (map[i] && (map[i] != '\n'))
        i += 1;
    i += 1;
    if (my_putstr(map+i, STDOUT_FILENO) == EXIT_ERROR)
        return (EXIT_ERROR);
    return (EXIT_SUCCESS);
}

int bsq(char *filepath)
{
    char *buffer = get_content(filepath);

    if (!buffer)
        return (EXIT_ERROR);
    // if (check_map(buffer) == EXIT_ERROR) {
    //     free(buffer);
    //     return (EXIT_ERROR);
    // }
    // init int **
    // algo
    if (print_map(buffer) == EXIT_ERROR)
        return (EXIT_ERROR);
    free(buffer);
    return (EXIT_SUCCESS);
}