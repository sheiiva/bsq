/*
** EPITECH PROJECT, 2020
** INCLUDE FILES
** File description:
** utils.h
*/

#ifndef UTILS_H_
    #define UTILS_H_

    #include <unistd.h>
    #include <stdlib.h>
    #include "my.h"

    #define EXIT_ERROR 84

    #define EMPTY       '.'
    #define OBSTACLE    'o'
    #define iEMPTY      1
    #define iOBSTACLE   0

    #define UP(map,length,x)(map[x-length])
    #define LEFT(map,length,x)(map[x-1])
    #define CORNER(map,length,x)(map[x-length-1])

    int min(int a, int b, int c);
    int find_first(char *map);
    size_t *my_arralloc(size_t size);

#endif /* !UTILS_H_ */