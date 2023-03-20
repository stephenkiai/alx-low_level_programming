#include <stdio.h>
#include "dog.h"
/**
 *init_dog- initialize a variable of type struct dog.
 *@name: first member
 *@age: second member
 *@owner: third member
 *@d: pointer to derefernce.
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

(*d).name = name;
(*d).age = age;
(*d).owner = owner;

}
