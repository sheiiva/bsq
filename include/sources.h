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

    #ifndef ROOT_H_
        #define ROOT_H_

        #include <stddef.h>
        #include "my.h"

        int bsq(char *filepath);
        int check_args(int ac);

    #endif /* !ROOT_H_ */

#endif /* !SOURCE_H_ */