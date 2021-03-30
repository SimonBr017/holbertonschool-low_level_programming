#include "holberton.h"
/**
 * main - main entry
 *@argc: nbr of arg
 *@argv: arg
 *Return: returns 0 success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	char buf[1024];
	int read_f, write_f;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
		dprintf(2, "Error: Can't read from file %s\n", argv[2]);
		exit(99);
	read_f = read(file_from, buf, 1024);
	while (read_f > 0)
		if (read_f == -1)
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		write_f = write(file_to, buf, read_f);
		if (write_f == -1)
			dprintf(2, "Error: Can't read from file %s\n", argv[2]);
			exit(99);
	close(file_from);
	if (close(file_from) == -1)
		dprintf(2, "Error: Can't close fd %d\n", file_from);
		exit(100);
	close(file_to);
	if (close(file_to) == -1)
		dprintf(2, "Error: Can't close fd %d\n", file_to);
		exit(100);
	return (0);
}
