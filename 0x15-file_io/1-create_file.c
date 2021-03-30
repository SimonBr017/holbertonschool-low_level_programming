#include "holberton.h"
/**
 *create_file - function that creates a file
 *@filename: pointer to the file to create
 *@text_content: pointer to a null terminated string to write to the file
 *Return: 1 if success, -1 if fail
 */

int create_file(const char *filename, char *text_content)
{
	int fd, write_f;
	int i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	while (text_content[i] != '\0')
	{
		i++;
	}
	write_f = write(fd, text_content, i);

	close(fd);
	if (write_f == -1)
		return (-1);
	return (1);
}
