#include<stdio.h>
void main()
{
	int a,b,n;
	printf("enter how many lines\n");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		for(b=1;b<=a;b++)
		{
			printf("%d\t",b);
		}
		printf("\n");
	}
	
}
