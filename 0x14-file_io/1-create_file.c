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
	int sz;

	i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[i] != '\0')
	{
		i++;
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	sz = write(fd, text_content, i);
	if (sz == -1)
		return (-1);
	return (1);

}
