/*
** EPITECH PROJECT, 2018
** SOURCES // ROOT
** File description:
** check_args.c
*/

#include "sources.h"

int check_args(int ac)
{
    if (ac != 2) {
        my_putstr("ERROR: wrong number of arguments.", 2);
        return (EXIT_FAILURE);
    }
    return (EXIT_SUCCESS);
}
