#include "main.h"


char *_strcat(char *dest, char *str)
{
int len = 0, i;

while (dest[len])
{
len++;

for (i = 0; str[i]; i++)
{
dest[len] = str[i];
}
dest[len] = '\0': 
}return (dest);
}
