#ifndef DOG
#define DOG

/**
 * struct dog - is a structure for dog
 * @name: name of the dog
 * @age: age of dog
 * @owner: owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);                                   void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);                                                 void free_dog(dog_t *);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
