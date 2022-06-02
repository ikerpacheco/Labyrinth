/*
** EPITECH PROJECT, 2022
** save_file_str.c
** File description:
** saves the text of a file in a string
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

char *save_file_str(char *filepath)
{
    int fd = open(filepath, O_RDONLY);
    struct stat statbuf;
    char *buf;

    if (fd == -1)
        return (NULL);
    if (stat(filepath, &statbuf) == -1)
        return (NULL);
    buf = malloc(statbuf.st_size);
    if (buf == NULL)
        return (NULL);
    read(fd, buf, statbuf.st_size);
    close(fd);
    return (buf);
}
