#include "main.h"
/**
 * _strlen - get the length of a NULL-terminated string
 * @str: string to get length iof
 * Return: lengtgh of string
 */
size_t _strlen(char *str)
{
	size_t len = 0;

	while (str[len])
		len++;
	return (len);
}
/**
 * append_text_to_file - appends text to a file
 * @filename: path to the file
 * @text_content: content to append
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fildes;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);
	fildes = open(filename, (O_WRONLY | O_APPEND));
	if (fildes == (-1))
		return (-1);
	if (text_content != NULL)
	{
		bytes_written = write(fildes, text_content, _strlen(text_content));
		if (bytes_written == -1)
		{
			close(fildes);
			return (-1);
		}
	}
	else
	{
		close(fildes);
		return (1);
	}
	close(fildes);
	return (1);
}
