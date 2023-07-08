#ifndef MAIN_H
#define MAIN_H

/* Task 0: Convert binary to unsigned int prototype */
unsigned int binary_to_uint(const char *b);
/* Task 1: Prints binary of a number prototype */
void print_binary(unsigned long int n);
/* Task 2: Returns bit value at given index prototype */
int get_bit(unsigned long int n, unsigned int index);
/* Task 3: Sets the value of a bit to 1 at a given index prototype */
int set_bit(unsigned long int *n, unsigned int index);
/* Task 4: Sets the bit value to 0 at a given index prototype */
int clear_bit(unsigned long int *n, unsigned int index);
/* Task 5: Returns bits that need to be flipped from one num to another prototype */
unsigned int flip_bits(unsigned long int n, unsigned long int m);
/* _putchar prototype */
int _putchar(char c);
/* Task 6: endianness prototype */
int get_endianness(void);

#endif
