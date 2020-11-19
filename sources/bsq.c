/*
** EPITECH PROJECT, 2018
** SOURCES // ROOT
** File description:
** bsq.c
*/

#include "sources.h"

int bsq(char *filepath)
{
    char *buffer = get_content(filepath);

    if (!buffer)
        return (EXIT_ERROR);
    free(buffer);
    return (EXIT_SUCCESS);
}