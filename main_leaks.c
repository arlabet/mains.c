#include "get_next_line.h"
#include <stdio.h>

int main (void)
{
	int fd;
	char *line;
	
	fd = open("text.txt", O_RDONLY);
	while (get_next_line(fd, &line) > 0)
	{
		printf("%s\n", line);
		free(line);
	}
	printf("%s\n", line);
	free(line);
	close(fd);
	//print_leaks();
	system("leaks a.out");
	return (0);

}
