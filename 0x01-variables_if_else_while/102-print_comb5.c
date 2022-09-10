#include<stdio.h>
/**
 * main - Prints all possible combinations of two two-digit numbers
 * ranging from 0-99, separated by a comma followed by a space
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j;
	for (i = 0; j <= 99; j++)

	{
		for (i = j; i <= 99; i++)
		{
			if (i != j)
			{
				putchar(j / 10 + 48);
				putchar(j % 10 + 48);
				putchar(' ');
				putchar(i / 10 + 48);
				putchar(i % 10 + 48);
				if (j * 100 + i != 9899)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	
	 } 
	putchar('\n');
	return (0);
}
