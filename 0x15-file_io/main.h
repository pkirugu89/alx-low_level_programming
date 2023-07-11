#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/* Task 0 : Read a text file and print it on std output prototype */
ssize_t read_textfile(const char *filename, size_t letters);
/* Task 1: Create a file prototype */
int create_file(const char *filename, char *text_content);
/* Task 2: Appends text at the end of a file prototype */
int append_text_to_file(const char *filename, char *text_content);

#endif
