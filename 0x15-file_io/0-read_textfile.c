#include "main.h"
/**
 * read_textfile - reads content of file, prints it to stdout
 * @letters: number of letters it should read and print
 * @filename: name of file to be opened
 * return: 0 if not opened, if filename is NULL return 0,
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *c;
	ssize_t fp;
	ssize_t a;
	ssize_t w;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	c = malloc(sizeof(char) * letters);
	a = read(fp, c, letters);
	w = write(STDOUT_FILENO, c, a);
	free(c);
	close(fp);
	return (w);
}
