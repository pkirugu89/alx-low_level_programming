#ifndef MAIN_H
#define MAIN_H
/* Task 0 : _memset prototype */
char *_memset(char *s, char b, unsigned int n);
/* putchar prototype */
int _putchar(char c);
/* Task 1: memory copy area prototype */
char *_memcpy(char *dest, char *src, unsigned int n);
/* Task 2: Locate a character in a string prototype */
char *_strchr(char *s, char c);
/* Task 3: Length of a prefix substring prototype */
unsigned int _strspn(char *s, char *accept);
/* Task 4: Search a string of any set of byte prototype */
char *_strpbrk(char *s, char *accept);
/* Task 5: Locate a substring prototype */
char *_strstr(char *haystack, char *needle);
/* Task 6: Print chessboard prototype */
void print_chessboard(char (*a)[8]);

#endif
