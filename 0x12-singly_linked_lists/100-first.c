#include <stdio.h>

void __attribute__((constructor)) wow(void);

/**
 * wow - Prints a string before the
 *        main function is executed.
 */
void wow(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
