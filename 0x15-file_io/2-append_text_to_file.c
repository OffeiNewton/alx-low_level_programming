#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>

/**
 * append_text_to_file - This function appends a text at the end of a file
 * @filename: The name of file to append text to
 * @text_content: The text content to append to file
 *
 * Return: Returns 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_count, text_size;

	if (filename == NULL)
		return (-1);

	/* open file with write permission and set file offset to end of file */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		text_size = 0;
		while (text_content[text_size] != '\0')
			text_size++;

		/* write text to file */
		write_count = write(fd, text_content, text_size);
		if (write_count == -1)
			return (-1);
	}

	/* close file and check for errors */
	if (close(fd) == -1)
		return (-1);

	return (1);
}
