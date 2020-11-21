/*
** EPITECH PROJECT, 2019
** INCLUDE FILES
** File description:
** sources.h
*/

#ifndef SOURCE_H_
    #define SOURCE_H_

    #include <stdlib.h>
    #include "utils.h"
    #include "cell.h"

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
    char *findsquare(char *map);
    int check_map(char *map);

#endif /* !SOURCE_H_ */