#include "main.h"

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, appends, length;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	appends = write(fd, text_content, length);
	if (fd < 0 || appends < 0)
		return (-1);
	close(fd);
	return (1);
}
