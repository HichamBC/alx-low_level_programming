#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - creates a file.
 * @filename: name of the file to create.
 * @text_content: NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t numWritten;
	mode_t filePerms;
	char *ptr = NULL;

	if (filename == NULL)
		return (-1);

	filePerms = S_IRUSR | S_IWUSR;
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, filePerms);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		ptr = text_content;
		while (*ptr != '\0')
		{
			len++;
			ptr++;
		}

		numWritten = write(fd, text_content, len);
		if (numWritten == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
