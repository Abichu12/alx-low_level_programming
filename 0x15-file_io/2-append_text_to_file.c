#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
* _strlen - length of a string
* @s : pointer
*
* Return: length
*/
int _strlen(char *s)
{
int length = 0;
while (s[length])
{
length++;
}
return (length);
}
/**
* append_text_to_file - appends a text
* @filename: name of the file
* @text_content: text content
*
* Return: 1 if success and -1 if failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
int wlen;
if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
if (text_content != NULL)
wlen = write(fd, text_content, _strlen(text_content));
close(fd);
if (wlen == -1)
return (-1);
return (1);
}
