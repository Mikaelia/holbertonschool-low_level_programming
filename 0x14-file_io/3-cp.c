#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
  * copy_textfile - copies contents of one file to another
  * @filefrom: file to read from
  * @fileto: name of file to create and print to
  *
  * Return: 0 on success.
  */
int copy_textfile(const char *filefrom, char *fileto)
{
	int fd1, fd2;
	char *buf;
	int sz, numred;

	/* creating buffer */

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
		return (-1);

	fd1 = open(filefrom, O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filefrom);
		free(buf);
		exit(98);
	}
	fd2 = open(fileto, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fileto);
		free(buf);
		exit(99);
	}
	/* read from file */
	while ((numred = read(fd1, buf, 1024)) > 0)
	{
		if (numred == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filefrom);
			free(buf);
			exit(98);
		}

		/* write after 1024 bytes */

		sz = write(fd2, buf, numred);
		if (sz == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fileto);
			free(buf);
			exit(99);
		}
	}
	if (numred == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filefrom);
		exit(98);
	}
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		free(buf);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		free(buf);
		exit(100);
	}
	return (0);

}
/**
  * main - copies content of a file to another
  * @argc: number of arguments
  * @argv: argument list
  *
  * Return: 0;
  */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_textfile(argv[1], argv[2]);
	return (0);
}
