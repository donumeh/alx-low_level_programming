#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>

unsigned int binary_to_uint(const char *b);
int _strlen(const char *);
unsigned int char_to_int(char, int *);
unsigned int _pow(int, int);
void print_binary(unsigned long int n);
int _putchar(char);
int get_bit(unsigned long int, unsigned int);
int set_bit(unsigned long int *, unsigned int);
int clear_bit(unsigned long int *, unsigned int);

#endif /* MAIN_H */
