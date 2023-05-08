#include "main.h"
/**
 * read_textfile - reads a textfile
 * @filename: file to read
 * @letters: number of bytes to read
 * Return: printed letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, pr, w;
	char *buff;

	buff = malloc(letters);
	if (buff == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	printed = read(fd, buff, letters);
	if (pr == -1)
		return (0);
	w = write(STDOUT_FILENO, buff, printed);
	if (w == -1)
		return (0);
	if (close(fd) == -1)
		return (0);
	free(buff);
	return (pr);
}
