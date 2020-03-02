#include<stdio.h>
#include<math.h>
int add (int x,int y);//function prototype
int main()
{
	int i,n,j,odd,even;
	odd=0;
	even=0;
	printf("to find the sum of odd position number and even position number \n");
	printf("enter the number of number of input\n");
	scanf("%d",&n);
	int a[n];
	for (i=0;i<=(n-1);i++)
    {
    	scanf("%d",&a[i]);
    	
	}
    for(j=0;j<=(n-1);j++)
	{
		if(j%2!=0)
	even=add(even,a[j]);
    
    else
    odd=add(odd,a[j]);
}
printf("the odd and even position summation is %d,%d",odd,even);
}
int add (int x,int y)
{
	return (x+y);
}

