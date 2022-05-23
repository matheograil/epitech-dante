/*
** EPITECH PROJECT, 2021
** Delivery
** File description:
** fs_open_file
*/

#include "../inc/my.h"

void open_read_file(char const *filepath, map_t *map)
{
    struct stat *size = malloc(sizeof(struct stat));
    int fd;
    int bs;

    stat(filepath, size);
    map->buffer = malloc((size->st_size + 1) * sizeof(char));
    fd = open(filepath, O_RDONLY);
    if (fd == -1)
        exit(84);
    bs = read(fd, map->buffer, size->st_size);
    if (bs == -1)
        exit(84);
    close(fd);
}
