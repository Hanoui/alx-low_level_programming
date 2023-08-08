#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

void print_usage_error(char *program_name);
void copy_file_contents(int from_fd, int to_fd);

/**
 * main - Entry point.
 * @ac: The number of command-line arguments.
 * @av: An array of pointers to the command-line arguments.
 * Return: 0 on success.
 */
int main(int ac, char **av)
{
	int from_fd, to_fd;

	if (ac != 3)
	{
		print_usage_error(av[0]);
		exit(97);
	}

	from_fd = open(av[1], O_RDONLY);
	if (from_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	to_fd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	copy_file_contents(from_fd, to_fd);

	if (close(from_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_fd);
		exit(100);
	}

	if (close(to_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_fd);
		exit(100);
	}

	return (0);
}

/**
 * print_usage_error - Prints the usage error message.
 * @program_name: The name of the program.
 */
void print_usage_error(char *program_name)
{
	dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", program_name);
}

/**
 * copy_file_contents - Copies the contents from one file to another.
 * @from_fd: The file descriptor of the source file.
 * @to_fd: The file descriptor of the destination file.
 */
void copy_file_contents(int from_fd, int to_fd)
{
	ssize_t read_count, write_count;
	char buffer[1024];

	while ((read_count = read(from_fd, buffer, 1024)) > 0)
	{
		write_count = write(to_fd, buffer, read_count);
		if (write_count != read_count || write_count == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file\n");
			exit(99);
		}
	}

	if (read_count == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file\n");
		exit(98);
	}
}

