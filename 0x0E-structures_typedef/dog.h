#ifndef DOG_H
#define DOG_H
/**
 * struct dog-structure for dog.
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 */
struct dog
{
char *name;
float age;
char *owner;
};


/**
 *description-prototypes
 *@name:first member
 *@age:second member
 *@owner:third member
 *@d:pointer to struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


/**
 *dog_t- defined as a new name for type struct dog.
 */
typedef struct dog dog_t;

#endif
