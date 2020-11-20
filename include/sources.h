/*
** EPITECH PROJECT, 2019
** INCLUDE FILES
** File description:
** sources.h
*/

#ifndef SOURCE_H_
    #define SOURCE_H_

    #include "struct.h"
    #include <stdlib.h>

    #define EXIT_ERROR 84

    #define EMPTY       '.'
    #define OBSTACLE    'o'
    #define iEMPTY      1
    #define iOBSTACLE   0

    #define UP(map,length,x)(map[x-length])
    #define LEFT(map,length,x)(map[x-1])
    #define CORNER(map,length,x)(map[x-length-1])

    typedef struct cell_s {
        size_t x;
        size_t value;
    } cell_t;

    #ifndef ROOT_H_
        #define ROOT_H_

        #include <stddef.h>
        #include <fcntl.h>
        #include <sys/types.h>
        #include <sys/stat.h>
        #include <unistd.h>
        #include "my.h"

        int bsq(char *filepath);
        int check_args(int ac);
        char *get_content(char *filepath);
        int get_file_size(char *filepath);
        int check_map(char *map);

    #endif /* !ROOT_H_ */

#endif /* !SOURCE_H_ */