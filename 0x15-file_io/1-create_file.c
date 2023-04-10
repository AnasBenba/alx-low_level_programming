#include "main.h"

/**
 * create_file - Creates a file and writes text_content into it.
 * @filename: The name of the file to create.
 * @text_content: A NULL terminated string to write to the file.
 *
 * Return: On success, returns 1. On failure, returns -1.
 */
int create_file(const char *filename, char *text_content)
{
	int file, len, numWrite;

	if (filename == NULL)
	{
		return (-1);
	}

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	len = 0;

	if (file == -1)
	{
		return (-1);
	}

	while (text_content != NULL)
	{
		if (text_content[len])
		{
			len++;
		}
	}

	numWrite = write(file, text_content, len);

	if (numWrite == -1 || numWrite != len)
	{
		return (-1);
	}

	close(file);
	return (1);
}
