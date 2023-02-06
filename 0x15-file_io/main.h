#ifndef STDLIB
#define STDLIB
#include <stdlib.h>
#endif /* STDLIB */

#ifndef TYPES
#define TYPES
#include <sys/types.h>
#endif /* SYS/TYPES */

#ifndef STAT
#define STAT
#include <sys/stat.h>
#endif /* SYS/STAT */

#ifndef FCNTL
#define FCNTL
#include <fcntl.h>
#endif /* FCNTL */

#ifndef UNISTD
#define UNISTD
#include <unistd.h>
#endif /* UNISTD */

#ifndef STDIO
#define STDIO
#include <stdio.h>
#endif /* STDIO */

#ifndef READ_TEXTFILE
#define READ_TEXTFILE
ssize_t read_textfile(const char *filename, size_t letters);
#endif /*READ_TEXTFILE */

#ifndef CREATE_FILE
#define CREATE_FILE
int create_file(const char *filename, char *text_content);
#endif /* CREATE_FILE */

#ifndef APPEND_TEXT_TO_FILE
#define APPEND_TEXT_TO_FILE
int append_text_to_file(const char *filename, char *text_content);
#endif /* APPEND_TEXT_TO_FILE */
