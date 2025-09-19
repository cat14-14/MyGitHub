#include <stdio.h>
int main(void){
	int a;
	int b[30];
	scanf("%d", &a);
	for(int i=0; i<a; i++)
	{
		scanf("%d", &b[i]);
	}
	for(int i=0; i<a; i++)
	{
		int min = i;
		for(int j=i+1; j<a; j++)
		{
			if(b[min] > b[j])
			{
				min = j;
			}
		}
		int temp = b[i];
		b[i] = b[min];
		b[min] = temp;
	printf("step : %d\n", i+1);
	for(int i=0; i<a; i++)
	{
		printf("%d ", b[i]);
	}
    printf("\n");
}
}