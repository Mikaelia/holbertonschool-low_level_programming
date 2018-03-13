#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
  * read_textfile - that reads a text file and prints it to standard output
  * @filename: name of file to read from
  * @letters: number of letters it should read and print
  *
  * Return: number of letters read and printed, 0 if could not open
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int numred;
	char *buf;

	if (letters <= 0 || filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	numred = read(fd, buf, letters);
	if (numred == -1)
	{
		free(buf);
		return (0);
	}
	write(1, buf, numred);

	free(buf);
	close(fd);
	return (numred);

}
