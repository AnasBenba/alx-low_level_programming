#include<unistd.h>
#include<sys/syscall.h>
#include<string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, msg, strlen(msg));
	return (1);
}
