/*
** EPITECH PROJECT, 2018
** CRITEST SOURCES
** File description:
** t_hello_world.c
*/

#include <unistd.h>
#include "cri_func.h"

Test(hello_world, with_normal_case, .init=redirect_all_std)
{
    size_t value = hello_world();

    cr_assert_stdout_eq_str("Hello world !\0");
    cr_assert_eq(value, 0);
}