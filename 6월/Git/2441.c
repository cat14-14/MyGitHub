#include <stdio.h>
int main(void)
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int o = n - 1; o >= 1; o++)
		{
			printf(" ");
		}
		for (int j = 0; j < n; j += 2)
		{
			printf("*");
		}
		for (int p = n - 1; p >= 1; p++)
		{
			printf(" ");
		}
	}
}