/*
** EPITECH PROJECT, 2020
** SOURCES // ROOT
** File description:
** utils.c
*/

#include "utils.h"

int min(int a, int b, int c)
{
    if (a <= b && a <= c)
        return (a);
    else if (b <= a && b <= c)
        return (b);
    else
        return (c);
}

int find_first(char *map)
{
    size_t i = 0;

    while (map[i]) {
        if (map[i] == EMPTY)
            return (i);
        i += 1;
    }
    return (0);
}

size_t *my_arralloc(size_t size)
{
    size_t *array = malloc(sizeof(size_t) * (size + 1));

    if (!array) {
        my_putstr("ERROR: cannot alloc array of type <size_t>.\n", STDERR_FILENO);
        return (NULL);
    }
    array[size] = '\0';
    return (array);
}