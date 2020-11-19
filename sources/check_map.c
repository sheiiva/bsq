/*
** EPITECH PROJECT, 2020
** SOURCES // ROOT
** File description:
** check_map.c
*/

#include "sources.h"

// static int check_length(char *map)
// {
//     int i = 0;

//     while (map[i] && (map[i] != '\n'))
//         i += 1;
//     i += 1;

//     return (EXIT_SUCCESS);
// }

int check_map(char *map)
{
    size_t width = my_getnbr(map);

    if (!width)
        return (EXIT_ERROR);
    if (width != (my_counter(map, '\n') - 1))
        return (EXIT_ERROR);
    // if (check_length(map) == EXIT_ERROR)
    //     return (EXIT_ERROR);
    return (EXIT_SUCCESS);
}