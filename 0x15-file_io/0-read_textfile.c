#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the file name
 * @letters: number of letters to read
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t n;

	buf = malloc(letters + 1);
	if (!buf)
		return (0);

	/* read */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	n = read(fd, buf, letters);
	if (n == -1)
		return (0);
	close(fd);

	buf[n + 1] = '\0';

	n = write(STDOUT_FILENO, buf, n);

	return (n);
}
