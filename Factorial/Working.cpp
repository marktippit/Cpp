#include <cstdio>

int main ()
{
	int n = 10;
	int temp = 1;
	for (int i = 1; i < n; i++)
	{
		temp *= (i+1);
		printf("Rotation %d, temp is now %d\n", i, temp);
	}
	printf("The factorial of %d is %d: ", n, temp);

	return 0;
}