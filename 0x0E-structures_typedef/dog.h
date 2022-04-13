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
struct dog {
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
