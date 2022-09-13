#include <stdio.h>

/**
 * main - print first 10 alphabet 
 * Return: 0
 */

int main(void)
{
	int counter;
	int countto = 10;
	long a = 1;
	long b = 2;

	for (counter = 1; counter <= (countto / 2); counter++)
	{
		printf("%li %li ", a, b);
		a += b;
		b += a;
	}
	if (countto % 2 == 1)
		printf("%li", a);

	printf("\n");

	return (0);
}
