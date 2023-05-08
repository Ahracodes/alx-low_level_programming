#ifndef MAIN_H
#define MAIN_H

/* libraries */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/* prototypes */

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

int main(int argc, char *argv[]);
void error_100(int file_descriptor);
void error_99(char *name_of_file);
void error_98(char *name_of_file);
void error_97(void);

#define STORAGE_SIZE 1024

#endif
