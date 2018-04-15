#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
  * append_text_to_file - appends a text to a file
  * @filename: name of file to create
  * @text_content: null term string to append to file
  *
  * Return: 1 success, -1 fail
  */
int append_text_to_file(const char *filename, char *text_content)
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
	fd = open(filename, O_WRONLY | O_APPEND, 0600);
	if (fd == -1)
		return (-1);
	sz = write(fd, text_content, i);
	if (sz == -1)
		return (-1);
	close(fd);
	return (1);

}
