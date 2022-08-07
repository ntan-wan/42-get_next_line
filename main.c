#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "get_next_line.h"

int main(void)
{
    int fd;
    //int fd2;
    char *line;

    fd = open("test.txt", O_RDONLY);
    //fd2 = open("test2.txt", O_RDONLY);
    line = "";
    while (line != NULL)
    {  
        line = get_next_line(fd);
        printf("%s", line);
        /*line = get_next_line(fd2);
        printf("%s", line);
        line = get_next_line(fd);
        printf("%s", line);
        line = get_next_line(fd2);
        printf("%s", line);*/
    }
    fd = close(fd);
    //fd2 = close(fd2);
    return (0);
}