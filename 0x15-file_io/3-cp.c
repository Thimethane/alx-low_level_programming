#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the function succeeds - 0.
 */
int main(int argc, char *argv[])
{
	int from_fd, to_fd, r, w;
	char buf[BUFFER_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]), exit(98);

	to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to_fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	while ((r = read(from_fd, buf, BUFFER_SIZE)) > 0)
	{
		w = write(to_fd, buf, r);
		if (w == -1 || w != r)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	if (r == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]), exit(98);

	if (close(from_fd) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_fd), exit(100);

	if (close(to_fd) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_fd), exit(100);

	return (0);
}
