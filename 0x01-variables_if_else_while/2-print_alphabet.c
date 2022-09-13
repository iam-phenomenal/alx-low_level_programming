#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry
 * Description: Prints alphabets in lowercase and then new line
 * Return: 0
*/
int main(void)
{
	char ch = "a";
	for (ch; ch <="z"; ++ch)
	{
		putchar(ch);
	}
	putchar("\n");
return (0);
}
