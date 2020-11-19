/*
** EPITECH PROJECT, 2018
** SOURCES // ROOT
** File description:
** main.c
*/

#include "sources.h"

int main(int ac, char **av)
{
    if (check_args(ac) == EXIT_FAILURE)
        return (84);
    return (bsq(av[1]));
}
