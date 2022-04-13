#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - a struct about dog features
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: creates a struct
 */

typedef struct dog {
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
