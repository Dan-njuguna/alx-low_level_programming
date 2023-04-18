#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: bytes, of the allocated space for ptr
 * @new_size: size in bytes of the new memory block
 * Return: ptr if new_size == old_size
 *      Null if new_size == 0 , ptr is not null.
 *      Pointer to newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
        char *d;
        unsigned int n;
        unsigned int high;
        char *new_ptr;

        if (ptr == NULL)
        {
                d = malloc(new_size);
                return (d);
        }
        else if (new_size == 0)
        {
                free(ptr);
                return (NULL);
        }
        else if (new_size == old_size)
                return (ptr);
        d = malloc(new_size);
        if (d == NULL)
                return (NULL);
        high = new_size;
        if (new_size > old_size)
                high = old_size;
        new_ptr = ptr;
        for (n = 0; n < high; n++)
                d[n] = new_ptr[n];
        free(ptr);
        return (d);
}
