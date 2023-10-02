#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output.
 * @filename: text file to read from.
 * @letters: number of letters to read and print from the file.
 *
 * Return: number of letters read and printed or 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t numread;
	char *buf = NULL;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	numread = read(fd, buf, letters);
	if (numread == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	if (write(STDOUT_FILENO, buf, numread) != numread)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);
	return (numread);
}
