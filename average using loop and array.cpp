#include<stdio.h>
main()
{
	int i=0,c=0;
	float a;
	int b[10];
	printf("to find the average of first 10 numbers \n");
	
	while (i<=9)
    {
    	
    	scanf("%d",&b[i]);
    	c+=b[i];
    	i++;
    }
    	printf("the reuired sum is :%4d",c);
    	a=c/10.0;
    	
	printf("hence the average of 10 numbers is:%f ",a);
}
