#include "main.h"
/**
  * main - copy a file to another
  * @argc: argument count
  * @argv: commands gioven to prograM
  * Return: 0 on success, non zero otherwise
  */
int main(int argc, char *argv[])
{
	char *file_from = argv[1], *file_to = argv[2], buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written, fildes_from, fildes_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fildes_from = open(file_from, O_RDONLY);
	if (fildes_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fildes_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fildes_to == -1)
	{
		dprintf(STDERR_FILENO,"Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while ((bytes_read = read(fildes_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fildes_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (close(fildes_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", fildes_from);
		exit(100);
	}
	if (close(fildes_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %ld\n", fildes_to);
		exit(100);
	}
	return (0);
}
