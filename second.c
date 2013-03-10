#include <stdio.h>
#include <stdlib.h>

// calculate the Fibonacci function

int fab(int number)
{
	if (0 == number || 1 == number)
	{
		return 1;
	}else
	{
		return fab(number - 2) + fab(number - 1);
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n",fab(n));
	return 0;
}
