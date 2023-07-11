#ifndef MAIN_H
#define MAIN_H

/* header files */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/* prototypes */
ssize_t read_textfile(const char *filename, size_t letters);

#endif /* MAIN_H */
