#include "main.h"
#include <stdio.h>
/**
 * create_file - creates a file
 * @filename: Name of file to create
 * @text_content: The contents of the created file
 * Return: 1 on success, -1 on failure, -1 if filename == NULL,
 */
int create_file(const char *filename, char *text_content)
{
	int fd, written, len;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	written = write(fd, text_content, len);

	if (fd == -1 || written == -1)
		return (-1);
	close(fd);
	return (1);
}
