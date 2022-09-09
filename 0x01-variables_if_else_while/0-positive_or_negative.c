#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - entry point
 *
 * Return:always return 0
 *
 */
int main(void)
{
  /**
   * variable n has neen declared
   * coding then assigns the random value.
   */
   int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is positive\n", n);
	}
	return (0);
}
