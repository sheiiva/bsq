/*
** EPITECH PROJECT, 2018
** SOURCES // ROOT
** File description:
** hello_world.c
*/

#include <stddef.h>
#include "my.h"

size_t hello_world(void)
{
    return (my_putstr("Hello world !\0", 1));
}