#include "main.h"
/**
  * _strlen - get the length of a string
  * @str: string to get length of
  * Return: length of string
  */
size_t _strlen(char *str)
{
	size_t count = 0;

	while (str[count])
		count++;
	return (count);
}
/**
  * create_file - cvreate a file with permissions rw-------
  * @filename: name of the file
  * @text_content: content to write to file
  * Return: 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int fildes;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);
	fildes = open(filename, (O_WRONLY | O_CREAT | O_TRUNC), 0600);
	if (fildes == -1)
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
	close(fildes);
	return (1);
}
