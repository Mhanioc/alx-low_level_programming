#include <stdio.h>


char *_strcat(char *dest, char *str)
{
	char fullStr[];

    int strLen = (strlen(dest) + strlen[str]);
    int dest_len = strlen(dest);

	int i = 0;
	while(dest[i] != '\0')
	{
		fullStr[i] = dest[i];
		i++;
	}

	for(int i = 0; i <= dest_len; i++){
		if (dest[i] != '\0')
		{
			fullStr[i] = dest[i];
			i++;
		}else
		{
			fullStr[i] = " ";
		}
	}
    

	for(int i = 0; i <= str_len; i++){
		if (dest[i] != '\0')
		{
			fullStr[i] = dest[i];
			i++;
		}else
		{
			putchar('\n') ;
		}
	}
}
