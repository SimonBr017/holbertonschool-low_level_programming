#include "holberton.h"
/**
 *filecheck - check if file is null
 *@f1: file 1
 *@f2: file 2
 */
void filecheck(char *f1, char *f2)
{
	if (f1 == NULL)
		read_error(f1);
	if (f2 == NULL)
		write_error(f2);
}
/**
 * read_error - check if error on file to read
 * @f: pointer to file to read
 */
void read_error(char *f)
{
	dprintf(2, "Error: Can't read from file %s\n", f);
	exit(98);
}
/**
 * write_error - check if error on file to write
 * @f: pointer to file write
 */
void write_error(char *f)
{
	dprintf(2, "Error: Can't write to %s\n", f);
	exit(99);
}
/**
 * close_error - check if error on file to close
 * @fd: file descriptor
 */
void close_error(int fd)
{
	dprintf(2, "Error: Can't close fd %d\n", fd);
	exit(100);
}
/**
 * main - main entry
 *@argc: nbr of arg
 *@argv: arg
 *Return: returns 0 success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	int read_f, write_f, closer;
	char *buf;

	if (argc != 3)
	{ dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
	filecheck(argv[1], argv[2]);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		read_error(argv[1]);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
		write_error(argv[2]);
	buf = malloc(BUFSIZE * sizeof(char));
	if (buf == NULL)
		return (1);
	read_f = read(file_from, buf, BUFSIZE);
	if (read_f == -1)
		read_error(argv[1]);
	while (read_f > 0)
	{ write_f = write(file_to, buf, read_f);
		if (write_f == -1)
			write_error(argv[2]);
		read_f = read(file_from, buf, BUFSIZE);
		if (read_f == -1)
			read_error(argv[1]); }
	closer = close(file_from);
	if (closer == -1)
		close_error(closer);
	closer = close(file_to);
	if (closer == -1)
		close_error(closer);
	free(buf);
	return (0);
}
