/* main.c */
/* Author: Yarmolik Anastasia, group 11 */
/* Program to find all three-digit prime numbers(22 var) */
#include <stdio.h>

/* Declaration of private functions */
int isPrime(int num)
{
	int i;

	if(num < 2)
		return 0;

	for(i = 2; i * i <= num; ++i)
	{
		if(num % i == 0)
			return 0;
	}

	return 1;
}

/*
 * main - finds and prints all three-digit prime numbers
 * Returns:
 *   0 on success
 */
int main (void)
{
	int i;
	int counter = 0;  /* counter for prime numbers */

	printf("Three-digit prime numbers: \n");

	for(i = 101; i < 1000; ++i){
		if(isPrime(i))
		{
			printf ("%d ", i);
			++counter;
		}
	}

	printf ("\nTotal count: %d\n", counter);

        return 0;
}
