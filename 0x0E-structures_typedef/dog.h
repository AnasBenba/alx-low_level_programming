#ifndef MY_STRUCT_DOG
#define MY_STRUCT_DOG

/**
*struct dog -> structure representing a dog
*@name: name of the dog
*@age: age of the dog
*@owner: owner of the dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
