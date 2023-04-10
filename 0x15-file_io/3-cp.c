#include "main.h"

/**
* copy_file - Copies the content of one file to another
* @from: Pointer to the path of the source file
* @to: Pointer to the path of the destination file
* Return: void
*/
void copy_file(char *from, char *to)
{
	int file_to, file_from, bytes_read, bytes_written, close_from, close_to;
	char buffer[1024];

	file_from = open(from, O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
		exit(98);
	}

	file_to = open(to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
		exit(99);
	}

	while ((bytes_read = read(file_from, buffer, 1024)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written < 0 || bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
			exit(99);
		}
	}
	if (bytes_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
		exit(98);
	}

	close_file(file_from);
	close_file(file_to);
}
/**
* close_file - closes a file and exits if there is an error
* @file: the file descriptor to close
* Return: void
*/
void close_file(int file)
{
	int close_file = close(file);

	if (close_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}
/**
* main - entry point function
* @argc: number of arguments passed to program
* @argv: pointer to array of arguments passed to program
* Return: 0 on success
*/
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);
	return (0);
}
