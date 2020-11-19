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

    #endif /* !ROOT_H_ */

#endif /* !SOURCE_H_ */