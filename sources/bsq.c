/*
** EPITECH PROJECT, 2020
** SOURCES // ROOT
** File description:
** bsq.c
*/

#include "sources.h"

int print_map(char *map)
{
    int i = my_strlen(map, '\n') + 1;

    if (my_putstr(map + i, STDOUT_FILENO) == EXIT_ERROR)
        return (EXIT_ERROR);
    return (EXIT_SUCCESS);
}

static char *set_content(char *filepath)
{
    char *buffer = get_content(filepath);

    if (!buffer)
        return (NULL);
    if (check_map(buffer) == EXIT_ERROR) {
        my_putstr("ERROR: map format.\n", STDERR_FILENO);
        free(buffer);
        return (NULL);
    }
    return (buffer);
}

int bsq(char *filepath)
{
    char *buffer = set_content(filepath);

    if (!buffer)
        return (EXIT_ERROR);
    if (!(buffer = findsquare(buffer)))
        return (EXIT_ERROR);
    if (print_map(buffer) == EXIT_ERROR)
        return (EXIT_ERROR);
    free(buffer);
    return (EXIT_SUCCESS);
}