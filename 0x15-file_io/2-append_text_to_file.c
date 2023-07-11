#include "main.h"

/**
 * append_text_to_file - appends a text file to fd
 * @filename: the name of the file
 * @text_content: the text content to append to the fd
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, byte_written = 0, i;

	if (!filename)
		return (-1);

	if (text_content == NULL)
	{
		if (access(filename, F_OK) != 0)
			return (-1);
		else
			return (1);
	}
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	for (i = 0; text_content[i] != '\0'; i++)
		;
	byte_written = write(fd, text_content, i);
	if (byte_written == -1)
		return (-1);

	close(fd);
	return (1);
}
