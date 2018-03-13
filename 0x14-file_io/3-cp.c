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
	int numred;
	char *buf;
	int sz;
	int ret;

	/* creating buffer */

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
		return (0);




	/* open files to read from and file to write from */

	fd1 = open(filefrom, O_RDONLY);
	if (fd1 == -1)
	{
		return (-1);
	}
	fd2 = open(fileto, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
		return (-1);



	/* read from file */
	numred = read(fd1, buf, 1024);
	if (numred == -1)
	{
		free(buf);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filefrom);
		exit(98);
	}
	/* write after 1024 bytes */

	sz = write(fd2, buf, 1024);
	if (sz == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fileto);
		return (99);
	}

	free(buf);
	ret = close(fd1);
		if (ret < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't close %d", fd1);
			exit(100);
		}
	ret = close(fd2);
		if (ret < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't close %d", fd2);
			exit(100);
		}
	return (ret);

}
/**
  * main - copies content of a file to another
  * @argc - number of arguments
  * @argv - argument list
  *
  * Return: 1 success, -1 fail
  int*/
int main(int argc, char **argv)
{

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (argc < 3)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
		exit(98);
	}
	copy_textfile(argv[1], argv[2]);
	return (0);

}
