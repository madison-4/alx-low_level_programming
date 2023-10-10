#include "main.h"
/**
  * read_textfile - reads a text file and prints it to the POSIX stdout
  * @filename: name of the file to read from
  * @letters:number of letters to print
  * Return: number of letters porinted or 0 if it can't count
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t bytes_read, bytes_written;
	int fildes;

	if (filename == NULL)
		return (0);
	fildes = open(filename, O_RDONLY);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fildes);
		return (0);
	}
	bytes_read = read(fildes, buffer, letters);
	if (bytes_read < 0)
	{
		free(buffer);
		close(fildes);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if ((bytes_written < 0) || ((size_t)bytes_written != (size_t)bytes_read))
	{
		free(buffer);
		close(fildes);
		return (0);
	}
	free(buffer);
	close(fildes);

	return (bytes_read);
}

