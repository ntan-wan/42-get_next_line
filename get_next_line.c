#include "get_next_line.h"
#define BUFFER_SIZE 1

char    *get_next_line(int fd)
{
    char    *buffer;

    buffer = malloc(sizeof * buffer * (BUFFER_SIZE  + 1));
    read(fd, buffer, BUFFER_SIZE);
    if (!buffer)
        return (NULL);
    return (buffer);    
}