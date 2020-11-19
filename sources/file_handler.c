/*
** EPITECH PROJECT, 2018
** SOURCES // ROOT
** File description:
** file_handler.c
*/

#include "sources.h"

int get_file_size(char *filepath)
{
    struct stat filestat;

    if (stat(filepath, &filestat) == -1)
        return (-1);
    return(filestat.st_size);
}

int read_from_file(int fd, char *buffer, int size)
{
    if (read(fd, buffer, size) == -1) {
        my_putstr("ERROR: cannot read from file.\n", STDERR_FILENO);
        return (EXIT_ERROR);
    }
    return (EXIT_SUCCESS);
}

int file_handler(char *filepath)
{
    int fd = open(filepath, O_RDONLY);

    if (fd == -1) {
        my_putstr("ERROR: cannot open file.\n", STDERR_FILENO);
        return (-1);
    }
    return (fd);
}

char *get_content(char *filepath)
{
    int fd = 0;
    char *buffer = my_str_alloc(NULL, get_file_size(filepath) + 1);

    if (!buffer)
        return (NULL);
    if ((fd = file_handler(filepath)) == -1) {
        free(buffer);
        return (NULL);
    }
    if (read_from_file(fd, buffer, get_file_size(filepath)) == EXIT_ERROR) {
        free(buffer);
        return (NULL);
    }
    if (close(fd) == -1) {
        my_putstr("ERROR: cannot close file.\n", STDERR_FILENO);
        free(buffer);
        return (NULL);
    }
    return (buffer);
}