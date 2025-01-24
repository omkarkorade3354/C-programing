#include<stdio.h>
void main()
{
	char ch;
	int a,b,n;
	printf("enter how many lines\n");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		for(b=1,ch='A';b<=a;b++,ch++)
		{
			printf("%c%c\t",ch,ch+32);
		}
		printf("\n");
	}
	
}
