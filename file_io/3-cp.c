#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
 * handle_error - Prints an error message and exits
 * @message: The error message
 * @value: The value to print (string)
 * @exit_code: The exit code
 */
void handle_error(const char *message, const char *value, int exit_code)
{
	dprintf(STDERR_FILENO, message, value);
	exit(exit_code);
}

void copy_content(int fd_from, int fd_to,
const char *file_from, const char *file_to);

/**
 * copy_file - Copies the content of a file to another file
 * @file_from: The file to copy from
 * @file_to: The file to copy to
 */
void copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		handle_error("Error: Can't read from file %s\n", file_from, 98);

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		handle_error("Error: Can't write to %s\n", file_to, 98);
	}

	copy_content(fd_from, fd_to, file_from, file_to);

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
}

/**
 * copy_content - Reads from one file descriptor and writes to another
 * @fd_from: The file descriptor to read from
 * @fd_to: The file descriptor to write to
 * @file_from: The file to copy from
 * @file_to: The file to copy to
 */
void copy_content(int fd_from, int fd_to,
const char *file_from, const char *file_to)
{
	int read_bytes, write_bytes;
	char buffer[BUFFER_SIZE];

	while ((read_bytes = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_bytes = write(fd_to, buffer, read_bytes);
		if (write_bytes != read_bytes)
		{
			close(fd_from);
			close(fd_to);
			handle_error("Error: Can't write to %s\n", file_to, 99);
		}
	}
	if (read_bytes == -1)
		handle_error("Error: Can't read from file %s\n", file_from, 98);
}

/**
 * main - Copies the content of a file to another file
 * @argc: The number of arguments
 * @argv: The arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);

	return (0);
}
