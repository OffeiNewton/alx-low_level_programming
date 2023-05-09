#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>

/**
 * create_file - This funtion creates a file and writes a string to that file
 * @filename: name of file to create
 * @text_content: The text content to write to file
 *
 * Return: returns 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n_bytes = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[n_bytes])
			n_bytes++;
	}

	if (write(fd, text_content, n_bytes) == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}
