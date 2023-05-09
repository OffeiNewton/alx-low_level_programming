#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>

/**
 * read_textfile - This function reads and prints a POSIX standard output
 * @filename: The name of file to read and print
 * @letters: The number of letters to read and print
 *
 * Return: the actual number of letters it could read and print or 0 if failed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_bytes;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	n_bytes = read(fd, buf, letters);
	if (n_bytes == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	write(STDOUT_FILENO, buf, n_bytes);

	free(buf);
	close(fd);

	return (n_bytes);
}
