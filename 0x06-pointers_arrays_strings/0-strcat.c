#include <main.h>


char *_strcat(char *dest, char *str)
{
	dest = "hello ";
	str = "World";

	int i;
	int j;

	for(i = 0; dest[i] != '\0'; i++)
	{
		
	}
	for( j = 0; src[j]; j++,i++)
	{
			dest[i] = src[j];
	}

	dest[i] = '\0';

	return dest;
}
