#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
/**
* _strlen - extracting the length
* @s: pointer
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
* create_file - creates a file
* @filename: name of the file
* @text_content: text to be written
*
* Return: 1 if success, -1 if failure
*/
int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t lenw = 0;
if (!filename)
return (-1);
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd < 0)
return (-1);
if (text_content)
lenw = write(fd, text_content, _strlen(text_content));
if (lenw == -1)
return (-1);
close(fd);
return (1);
}
