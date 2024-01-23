#include "stdlib.h"
#include "dog.h"

/**
* _strlen - function that get length of string
* @str: string
* Return: length of @str
*/

int _strlen(const char *str)
{

int length = 0;

while (*str++)
length++;
return (length);
}

/**
* _strcopy - function that return dest whith acopy of string
* @src: string
* @dest: copy string
* Return: @dest
*/

char *_strcopy(char *dest, char *src)
{
int i;
for (i = 0; src[i]; i++)
dest[i] = src[i];

dest[i] = '\0';
return (dest);

}

/**
* new_dog - function that creat a new dog
* @name: dog name
* @age: dog age
* @owner: owner name
* Return: NULL if the function fails
*/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;

if (!name || age < 0 || !owner)
return (NULL);

dog = (dog_t *)malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);

dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
if ((*dog).name == NULL)
{
free(dog);
return (NULL);
}

dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if ((*dog).owner == NULL)
{
free(*dog->name);
free(dog);
return (NULL);
}
dog->name = _strcopy(dog->name, name);
dog->age = age;
dog->owner = _strcopy(dog->owner, owner);

return (dog);
}
