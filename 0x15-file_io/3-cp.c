#include "main.h"
#include <stdarg.h>

#define BUFSIZE 1024

/**
 * error_exit - print an error message and exit with a specific code
 * @code: the exit code
 * @fmt: the format string for the error message
 * @...: the variable arguments for the format string
 */

void error_exit(int code, const char *fmt, ...)
{
	va_list args;

	va_start(args, fmt);
	dprintf(2, fmt, args);
	va_end(args);
	exit(code);
}

/**
 * main - copy the content of one file to another
 * @ac: the number of command-line arguments
 * @av: an array of command-line arguments
 *
 * Return: 0 on success, or the corresponding error code on failure
 */

int main(int ac, char **av)
{
	int from_fd, to_fd, bytes_read, bytes_written;
	char buffer[BUFSIZE];

	if (ac != 3)
		error_exit(97, "Usage: cp file_from file_to\n");

	from_fd = open(av[1], O_RDONLY);
	if (from_fd == -1)
		error_exit(98, "Error: Can't read from file %s\n", av[1]);

	to_fd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to_fd == -1)
		error_exit(99, "Error: Can't write to file %s\n", av[2]);

	while ((bytes_read = read(from_fd, buffer, BUFSIZE)) > 0)
	{
		bytes_written = write(to_fd, buffer, bytes_read);
		if (bytes_written == -1)
			error_exit(99, "Error: Can't write to file %s\n", av[2]);
	}

	if (bytes_read == -1)
		error_exit(98, "Error: Can't read from file %s\n", av[1);

	if (close(from_fd) == -1)
		error_exit(100, "Error: Can't close fd %d\n", from_fd);

	if (close(to_fd) == -1)
		error_exit(100, "Error: Can't close fd %d\n", to_fd);

	return (0);
}
