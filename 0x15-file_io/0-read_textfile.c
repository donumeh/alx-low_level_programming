#include "main.h"

/**
 * read_textfile - read a text file
 * @filename: name of file to read
 * @letters: the number of letters to read from file
 *
 * Return: number of bytes printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, i;
	char *str;
	ssize_t n;

	if (!filename)
		return (0);
	/* read the file with open */
	fd = open(filename, O_RDONLY);

       /* checks if error is encountered during opening */
	if (fd < 0)
		return (0);

	/* allocate memory to store the characters read for printing */
	str = malloc(sizeof(char) * letters);
	if (str == NULL)
		return (0);

	/* read the file */
	n = read(fd, str, letters);
	if (n < 0)
		return (0);

	/* print the letters */
	for (i = 0; i < n; i++)
		dprintf(2, "%c", str[i]);

	close(fd);
	free(str);
	return (n);
}
