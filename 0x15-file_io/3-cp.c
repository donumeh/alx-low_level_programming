#include "main.h"

/**
 * main - copies a file content into another
 * @argc: the number of files passed
 * @argv: pointers to file names
 *
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	int n;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	n = copy_content(argv[1], argv[2]);
	return (0);
}

/**
 * copy_content - copies a file content into another
 * @file_from: file to copy from
 * @file_to: file to copy to
 *
 * Return: int
 */

int copy_content(const char *file_from, const char *file_to)
{
	int fd0, fd1, error = 0;
	char *buffer;

	buffer = malloc(sizeof(char) * (1024 + 1));
	if (buffer == NULL)
		return (NULL);

	fd0 = open(file_to, O_TRUNC | O_WRONLY | O_CREAT, 0664);
	if (fd0 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit (99);

	if (access(file_from, F_OK) != 0)
	{
		dprint(STDERR_FILENO, "Can't read from file %s\n", file_from);
		exit(98);
	}

	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
		exit (EXIT_FAILURE);

	error = read(fd1, buffer, 1024);
	if (error == -1)
	{
		dprintf(STDERR_FILENO, "Can't read from file %s\n", file_from);
		exit (98);
	}

	error = write(fd0, buffer, 1024);
	if (error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}


	if (close(fd0) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", close(fd0));
		exit(100);
	}
	if (close(fd1) != 0)
	{
		printf(STDERR_FILENO, "Error: Can't close fd %d\n", close(fd1));
		exit(100);
	}


	free(buffer);
	return (1);
}
