#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#ifndef BUFF_SIZE
#define BUFF_SIZE 1024
#endif

void print_arg_error(void);
void print_read_error(const char *str);
void print_write_error(const char *str);
void print_close_error(int fd_value);

/**
 * main - entry point.
 * Description: copies the content of a file to another file.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0 (success).
 */

int main(int argc, char *argv[])
{
	int inputfd, outputfd;
	ssize_t numread;
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buf[BUFF_SIZE];

	if (argc != 3)
	{
		print_arg_error();
	}

	inputfd = open(argv[1], O_RDONLY);
	if (inputfd == -1)
	{
		print_read_error(argv[1]);
	}

	outputfd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, permissions);
	if (outputfd == -1)
	{
		print_write_error(argv[2]);
	}

	while ((numread = read(inputfd, buf, BUFF_SIZE)) > 0)
	{
		if (write(outputfd, buf, numread) != numread)
		{
			print_write_error(argv[2]);
		}
	}

	if (numread == -1)
	{
		print_read_error(argv[1]);
	}

	if (close(inputfd) == -1)
	{
		print_close_error(inputfd);
	}
	if (close(outputfd == -1))
	{
		print_close_error(outputfd);
	}

	return (0);
}
/**
 * print_arg_error - prints error msg if argument count isn't correct.
 *
 * Return: None.
 */

void print_arg_error(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
 * print_read_error - prints error msg for the file file_from.
 * @str: string representing the name of file_from.
 *
 * Return: None.
 */

void print_read_error(const char *str)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
	exit(98);
}

/**
 * print_write_error - prints error msg for the file file_to.
 * @str: string representing the name of file_to.
 *
 * Return: None.
 */

void print_write_error(const char *str)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
	exit(99);
}

/**
 * print_close_error - prints error msg if a file descriptor can't be closed.
 * @fd_value: file descriptor value.
 *
 * Return: None.
 */

void print_close_error(int fd_value)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_value);
	exit(100);
}
