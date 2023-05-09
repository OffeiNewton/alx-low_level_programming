#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <stdio.h>

/**
 * main - The Function copies the content of a file to another file
 * @argc: The number of arguments
 * @argv: The array of arguments
 *
 * Return: Returns 0 on success,else exit with error code and print message
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, read_count, write_count;
	char buf[1024];

	/* checks for the correct number of arguments */
	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	/* opens the file_from for reading */
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

	/* opens the file_to for writing (truncate if already exists) */
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	/* reads from file_from and write to file_to */
	do {
		read_count = read(fd_from, buf, 1024);
		if (read_count == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
		write_count = write(fd_to, buf, read_count);
		if (write_count == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	} while (read_count > 0);

	/* close file descriptors */
	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);

	return (0);
}
