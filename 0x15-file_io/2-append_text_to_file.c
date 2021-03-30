#include "holberton.h"
/**
 *append_text_to_file -  function that appends text at the end of a file
 *@filename: poiter to the file to mod
 *@text_content: pointer to a null terminated string to write to the file
 *Return: 1 if success, -1 if fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_f;
	int i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);

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
