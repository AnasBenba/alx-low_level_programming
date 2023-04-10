#include "main.h"

int main(int argc, char *argv[])
{
	int file_from, file_to, num_read, num_written;
	char text[1024];
	
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	
	file_from = open(argv[1], O_RDONLY);

	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	
	while ((num_read = read(file_from, text, 1024)) > 0)
	{
		num_written = write(file_to, text, num_read);
		if (num_written != num_read)
		{
			dprintf(STDERR_FILENO, "Error: Write to %s failed\n", argv[2]);
			exit(99);
		}
	}
	
	if (num_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	
	return (0);
}
