#ifndef DOG_H
#define DOG_H

/**
 * struct dog - adog struct
 * @name: dong name
 * @age: dog age
 * @owner: owner nane
 *
 * Description: just a lone dog struct
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
