#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @c: number of bytes allocated
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int c)
{
	void *ptrtomem;

	ptrtomem = malloc(c);
	if (ptrtomem == NULL)
		exit(98);
	return (ptrtomem);
}
