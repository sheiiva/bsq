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

    if (my_putstr(map+i, STDOUT_FILENO) == EXIT_ERROR)
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

int min(int a, int b, int c)
{
    if (a <= b && a <= c)
        return (a);
    else if (b <= a && b <= c)
        return (b);
    else
        return (c);
}

size_t check_value(size_t *map, size_t length, size_t x, cell_t *best)
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

char *write_square(char *map, cell_t best)
{
    int current = 0;
    size_t tmp = my_strlen(map, '\n') + 1;
    size_t length = my_strlen(map+tmp, '\n');
    size_t j = 0;
    size_t i = best.x;

    while (j < best.value) {
        while (best.x - i < best.value) {
            current = i - (j * (length+1)) + (int)(i / length) + tmp;
            map[current] = map[current] == OBSTACLE ? OBSTACLE : 'x';
            i -= 1;
        }
        i = best.x;
        j += 1;
    }
    return (map);
}

char *findsquare(char *map)
{
    size_t i = my_strlen(map, '\n') + 1;
    size_t length = my_strlen(map+i, '\n');
    size_t *imap = malloc(sizeof(size_t) * ((length * my_getnbr(map)) + 1));
    size_t x = 0;
    cell_t best = {0, 1};

    if (!imap) {
        free(map);
        return (NULL);
    }
    imap[my_getnbr(map)] = '\0';
    while (map[i]) {
        if (map[i] == EMPTY) {
            imap[x] = check_value(imap, length, x, &best);
            x += 1;
        } else if (map[i] == OBSTACLE)
            imap[x++] = iOBSTACLE;
        i += 1;
    }
    return (write_square(map, best));
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