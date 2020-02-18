#include "get_next_line.h"

int main (int argc, char **argv)
{
	int fd;
	char *line;
	int ret;
	
	ret = 0;
	fd = open(argv[1], O_RDONLY);
	argc = 2;
	while ((ret = get_next_line(fd, &line)) > 0)
	{
		printf("%d | ", ret);
		printf("%s\n", line);
		free(line);
	}
	printf("%d | ", ret);
	printf("%s\n", line);
	free(line);
	close(fd);
	//print_leaks();
	//system("leaks a.out");
	return (0);
}
