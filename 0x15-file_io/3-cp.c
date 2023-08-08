#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * main - Entry point.
 * @ac: The number of command-line arguments.
 * @av: An array of pointers to the command-line arguments.
 * Return: 0 on success.
 */
int main(int ac, char **av)
{
	int from_fd, to_fd, read_count, write_count;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
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

	while ((read_count = read(from_fd, buffer, 1024)) > 0)
	{
		write_count = write(to_fd, buffer, read_count);
		if (write_count != read_count || write_count == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			close(from_fd);
			close(to_fd);
			exit(99);
		}
	}

	if (read_count == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		close(from_fd);
		close(to_fd);
		exit(98);
	}

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

