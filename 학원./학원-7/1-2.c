#include <stdio.h>
int main(void){
	int a;
	int b[30];
	scanf("%d", &a);
	for(int i=0; i<a; i++)
	{
		scanf("%d", &b[i]);
	}
	for(int i=0; i<a-1; i++)
	{
		for(int j=0; j<a-1; j++)
		{
			if(b[j] > b[j+1])
			{
				int temp = b[j];
				b[j] = b[j+1];
				b[j+1] = temp;
			}
		}
	printf("step : %d\n", i+1);
	for(int i=0; i<a; i++)
	{
		printf("%d ", b[i]);
	}
    printf("\n");
    }
}