#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	double d;
	char c;
	float f;
	long int l;
	long long int L;

	printf("The size of an int is: %lu.\n", (unsigned long)sizeof(i));
	printf("The size of an double is: %lu.\n", (unsigned long)sizeof(d));
	printf("The size of an c is: %lu.\n", (unsigned long)sizeof(c));
			printf("The size of an float is: %lu.\n", (unsigned long)sizeof(f));
			printf("The size of an long int is: %lu.\n", (unsigned long)sizeof(l));
			printf("The size of long long int is: %lu.\n", (unsigned long)sizeof(L));
			return (0);
}
