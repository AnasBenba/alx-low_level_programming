#include "main.h"

/**
 * _strlen -> function that returns the length of a string.
 * @s: pointer to a string
 * Return: length of a string
 */
int _strlen(char *s)
{
	int len = 0;
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
/**
 * append_text_to_file - appends text to the end of a file
 * @filename: the name of the file
 * @text_content: the NULL-terminated string to append to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, len, numWrite;

	if (filename == NULL)
	{
		return (-1);
	}

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		close(file);
		return (-1);
	}

	len = _strlen(text_content);

	numWrite = write(file, text_content, len);

	if (numWrite == -1 || numWrite != len)
	{
		return (-1);
	}

	close(file);
	return (1);
}
