/*
** EPITECH PROJECT, 2020
** SOURCES // ROOT
** File description:
** check_map.c
*/

#include "sources.h"

#include <stdio.h>

static int check_length(char *map)
{
    int i = my_strlen(map, '\n') + 1;
    size_t size = my_strlen(map+i, '\n');

    while (map[i]) {
        if (my_strlen(map+i, '\n') != size)
            return (EXIT_ERROR);
        i += (size + 1);
    }
    return (EXIT_SUCCESS);
}

int check_map(char *map)
{
    size_t width = my_getnbr(map);

    if (!width)
        return (EXIT_ERROR);
    if (width != (my_counter(map, '\n') - 1))
        return (EXIT_ERROR);
    if (check_length(map) == EXIT_ERROR)
        return (EXIT_ERROR);
    return (EXIT_SUCCESS);
}