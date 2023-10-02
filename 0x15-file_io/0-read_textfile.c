#include "main.h"
#include <stdio.h>
/**
 * read_textfile - reads contents of a file
 * 	upto the given number of characters
 * @filename: File to be opened
 * @letters: number of characters to be read
 * Return: no. of chars read and printed,
 * 	0 if file cannot be opened.
 * 	0 if filename is NULL.
 * 	0 if write fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t written;
	ssize_t reader;
	char *size;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	if (filename == NULL)
		return (0);
	size = malloc(sizeof(char) * letters);
	reader = read(fd, size, letters);
	written = write(STDOUT_FILENO, size, reader);
	free(size);
	close(fd);
	return (written);
}
