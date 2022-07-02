#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Task 3 prints the
 * alphabet in lower case
 * then in upper case followed by a new line
 * Return : 0
**/

int main(void)
{
	/*my main code*/
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	for (ch = 65; ch <= 90; ch++)
	{
		putchar(ch);
	}
	putchar(10); /*This is Ascii newline*/

	return (0);/*returns 0*/
}
