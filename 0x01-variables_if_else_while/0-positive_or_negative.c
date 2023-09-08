#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/** 
 *main -  prints if the number is postive, negative or zero
 *Return: always 0
 */

int main(void)
{
	int n;
	srand(time(n));
	n = rand() - rand_max / 2;
if (n < 0)
	printf("%d is negative\n", n)
elif (n > 0)
	printf("%d is postive\n", n)
else
	printf("%d is zero\n", n)
return (0);

}
