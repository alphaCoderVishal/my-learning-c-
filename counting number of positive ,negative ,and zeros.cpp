#include <stdio.h>
#include <math.h>
int main()
{
	int positive=0,negative=0,zero=0,a,i,j;
	printf("to count number of positive, negative,zero input by user\n ");
	printf("enter the number of input :\n");
	scanf("%d",&a);
	int num[a];
	for (j=0;j<=(a-1);j++)
	{
		scanf("%d",&num[j]);
	}
	for (i=0;i<=(a-1);i++)
	{
		if(num[i]<0)
		{
			negative +=1;
		}
		if(num[i]>0)
		{
			positive +=1;
			
		}
			if(num[i]==0)
			{
			
	     	zero +=1;
        	}
	}
	printf("the number of negative ,positive,zero are respestively %d,%d,%d",negative,positive,zero);
	return 0;
	
}
