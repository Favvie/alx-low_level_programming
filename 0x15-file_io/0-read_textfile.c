#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints to the standard output
 * @filename: File to be read
 * @letters: the number of letters it should print
 *
 * Return: 0 if filename is NULL, if file cannot be opened,
 * write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buf[letters];

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	read(fd, buf, letters);
	buf[letters - 1] = '\o';

	close(fd);

	printf("%s\n", buf);

	return letters;
}
