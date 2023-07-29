#ifndef MAIN_H
#define MAIN_H
/* Task 0: Create and array prototype */
char *create_array(unsigned int size, char c);
/* _putchar prototype */
int _putchar(char c);
/* Task 1: _strdup prototype */
char *_strdup(char *str);
/* Task 2: str_concat prototype */
char *str_concat(char *s1, char *s2);
/* Task 3: 2d integer array prototype */
int **alloc_grid(int width, int height);
/* Task 4: alloc_grid prototype */
void free_grid(int **grid, int height);
/* Task 5: Concatenate all arguments prototype */
char *argstostr(int ac, char **av);
/* Task 6: Splits a string into words */
char **strtow(char *str);
#endif
