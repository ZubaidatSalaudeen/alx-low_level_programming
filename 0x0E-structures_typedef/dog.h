#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog structure
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: Its owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *str);
char *_strcpy(char *s1, char *s2);
void free_dog(dog_t *d);
#endif
