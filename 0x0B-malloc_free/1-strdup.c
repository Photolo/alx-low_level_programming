#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - count array
 * @s: array of elements
 * Return: 0
 */

char *_strdup(char *str)
{
	 if (str == NULL)
	 {
		 return (NULL);
	 }

	 size_t len = strlen(str);
	 char *result = malloc(len + 1);
	  if (result == NULL)
	  {
		  return (NULL);
	  }

	  strcpy(result, str);
	    return (result);
}

