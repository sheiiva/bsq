/*
** EPITECH PROJECT, 2020
** SOURCES // ROOT
** File description:
** check_args.c
*/

#include "sources.h"

int check_args(int ac)
{
    if (ac != 2) {
        my_putstr("ERROR: wrong number of arguments.", STDERR_FILENO);
        return (EXIT_ERROR);
    }
    return (EXIT_SUCCESS);
}
