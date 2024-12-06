#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define BUFFER_SIZE 1024

void print_error_and_exit(const char *message, const char *file, int exit_code)
{
	dprintf(STDERR_FILENO, message, file);
	exit(exit_code);
}

void copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, read_bytes, write_bytes;
	char buffer[BUFFER_SIZE];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		print_error_and_exit("Error: Can't read from file %s\n", file_from, 98);

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		print_error_and_exit("Error: Can't write to %s\n", file_to, 99);
	}

	while ((read_bytes = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_bytes = write(fd_to, buffer, read_bytes);
		if (write_bytes != read_bytes)
		{
			close(fd_from);
			close(fd_to);
			print_error_and_exit("Error: Can't write to %s\n", file_to, 99);
		}
	}

	if (read_bytes == -1)
		print_error_and_exit("Error: Can't read from file %s\n", file_from, 98);

	if (close(fd_from) == -1)
		print_error_and_exit("Error: Can't close fd %d\n", fd_from, 100);

	if (close(fd_to) == -1)
		print_error_and_exit("Error: Can't close fd %d\n", fd_to, 100);
}

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);

	return 0;
}
