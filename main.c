#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "get_next_line.h"

int main(void)
{
    int fd;
    char *line;

    fd = open("test.txt", O_RDONLY);
    line = "";
    //while (line != NULL)
    // {  
        line = get_next_line(fd);
        printf("%s", line);
   // }
    
    fd = close(fd);
    return (0);
}