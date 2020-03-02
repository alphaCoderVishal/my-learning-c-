#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the three numbers to compare\n");
	scanf("%d%d%d",&a,&b,&c);
	if (a>b)
	{
		if(b>c)
		printf("a is greatest of three number\n");
		else if(a>c)
		printf("a is greatest of three number\n");
		else
		printf("c is greatest of three number\n");
	
	}
	else if(a>c)
		printf("b is greatest of three number\n");
		else if(b>c)
			printf("b is greatest of three number\n");
			else
			printf("c is greatest of three number\n");	
}
