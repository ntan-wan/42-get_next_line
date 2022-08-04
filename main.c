#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "get_next_line.h"

int main(int ac, char **av)
{
    int fd;
    char *line;

    (void)ac;
    fd = open (av[1], O_RDONLY);
    line = "";
    while (line != NULL)
    {
        line = get_next_line(fd);
        printf("%s", line);
    }
    fd = close(fd);
    return (0);
}