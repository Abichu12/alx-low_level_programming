#ifndef _DOG_H_
#define _DOG_H_
/**
* struct dog - Dog informations
* @name: pointed to the name of dog
* @age:  pointed to the age of dog
* @owner: pointed to the owner of dog
*/
struct dog
{
char *name;
float age;
char *owner;
};
/**
* dog_t - Typedef for struct dog
*/
typedef struct dog dog_t;
int _putchar(char);
#endif
