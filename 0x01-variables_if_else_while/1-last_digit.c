#include <stdlib.h>
#include <time.h>
/**
 * main - entry
 * Return: Always (0)
 */
int main(void)
{
	int n;
	int last;
	last = n % 10

	srand(time(0));
	n = rand() - RAND_MAX / 2;
        if(last > 5 )
	{
		printf("last digit of %d is %d and greater than 5\n", n,last);
	}
	elsse if(last == 0)
	{
		 printf("last digit of %d is %d and is 0\n", n,last);
	}
	else if(last < 6 && !=0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n,last);
	}
	return (0);
}
