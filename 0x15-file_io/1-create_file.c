#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename grab
 * @text_content: content to be added
 *
 * Return: integer value
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	long int w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{

		while (text_content[len])
			len++;
		w = write(fd, text_content, len);
		if (w == -1)
			return (-1);
	}
	if (close(fd) == -1)
		return (-1);
	return (1);
}
