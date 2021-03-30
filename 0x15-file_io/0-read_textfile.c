#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *@filename: pointer to the file
 *@letters: nbr of char to read and print
 *Return: nbr ofchar print , 0 if it's fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, read_f, write_f;
	char *buf;

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	read_f = read(fd, buf, letters);
	if (read_f == -1)
		return (0);

	close(fd);

	write_f = write(STDOUT_FILENO, buf, read_f);

	free(buf);

	if (write_f == -1)
		return (0);

	return (write_f);
}
