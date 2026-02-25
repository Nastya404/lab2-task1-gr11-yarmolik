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

int main (void)
{
	printf("Results: \n");
	for(int i = 101; i < 1000; ++i){
		if(isPrime(i)){
			printf ("%d ", i);	}
	}
}
