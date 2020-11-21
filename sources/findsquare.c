/*
** EPITECH PROJECT, 2020
** SOURCES // ROOT
** File description:
** findsquare.c
*/

#include "sources.h"

static size_t check_value(size_t *map, size_t length, size_t x, cell_t *best)
{
    size_t mini = 0;

    if (x < length || (x % length) == 0)
        return (iEMPTY);
    mini = min(UP(map, length, x),
                LEFT(map, length, x),
                CORNER(map, length, x)) + 1;
    if (mini > best->value) {
        best->value = mini;
        best->x = x;
    }
    return (mini);
}

static char *write_square(char *map, cell_t best)
{
    int current = 0;
    size_t tmp = my_strlen(map, '\n') + 1;
    size_t length = my_strlen(map + tmp, '\n');
    size_t j = 0;
    size_t i = best.x;

    while (j < best.value) {
        while (best.x - i < best.value) {
            current = i - (j * (length + 1)) + (int)(i / length) + tmp;
            map[current] = map[current] == OBSTACLE ? OBSTACLE : 'x';
            i -= 1;
        }
        i = best.x;
        j += 1;
    }
    return (map);
}

static void algorithm(char *map, size_t *imap, cell_t *best)
{
    size_t i = my_strlen(map, '\n') + 1;
    size_t length = my_strlen(map + i, '\n');
    size_t x = 0;

    while (map[i]) {
        if (map[i] == EMPTY) {
            imap[x] = check_value(imap, length, x, best);
            x += 1;
        } else if (map[i] == OBSTACLE)
            imap[x++] = iOBSTACLE;
        i += 1;
    }
}

char *findsquare(char *map)
{
    cell_t best = {0, 1};
    size_t length = my_strlen(map + my_strlen(map, '\n') + 1, '\n');
    size_t *imap = my_arralloc(length * my_getnbr(map));

    if (!imap) {
        free(map);
        return (NULL);
    }
    if (my_getnbr(map) == 1 || length == 1) {
        map[find_first(map)] =
            map[find_first(map)] == OBSTACLE ? OBSTACLE : 'x';
    } else {
        algorithm(map, imap, &best);
        map = write_square(map, best);
    }
    free(imap);
    return (map);
}