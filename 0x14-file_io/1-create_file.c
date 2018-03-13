#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
  * create_file -  a function that creates a file
  * @filename: name of file to create
  * @text_content: null term string to write to file
  *
  * Return: 1 success, -1 fail
  */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int i;

	i = 0;

	if (filename == NULL)
		return (-1);
	while (text_content[i] != '\0')
	{
		i++;
	}
	fd = open(filename, O_CREAT, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	return (1);

}
