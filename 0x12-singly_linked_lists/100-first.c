#include <stdio.h>
/* use of constructors in C*/
void main_constructor(void) __attribute__((constructor));
/**
 *  main_constructor - Attribute to print message before main
 *  Return: nothing
 */
void main_constructor(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
