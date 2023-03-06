#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
int _strncmp(char *s1, char *s2, int j);
void print_chessboard(char (*a)[8]);
unsigned int _strspn(char *s, char *accept);

#endif
