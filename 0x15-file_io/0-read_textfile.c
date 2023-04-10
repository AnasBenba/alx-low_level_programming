#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 *
 * Return: the actual number of letters read and printed,
 *         or 0 if the file cannot be opened or read,
 *         or if filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t readText;
	ssize_t numRead;
	char *text = malloc(sizeof(char) * letters);

	if (text ==  NULL || filename == NULL)
	{
		return (0);
	}

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		return (0);
	}

	readText = read(file, text, letters);

	if (readText == -1)
	{
		return (0);
	}

	numRead = write(STDOUT_FILENO, text, readText);

	if (numRead != readText)
	{
		return (0);
	}

	close(file);
	free(text);

	return (numRead);
}
