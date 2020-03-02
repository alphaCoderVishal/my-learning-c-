#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,n,k,t;
	printf("enter the number of numbers to compare\n");
	scanf("%d",&n);
	int a[n];
	for(j=0;j<n;j++)
	{
	
	scanf("%d",&a[j]);
   }
	
for(j=0;j<n;j++)
{
		
	for(i=j+1;i<n;i++)
	{
		if (a[j]>a[i])
		{
			t=a[j];
			a[j]=a[i];
			a[i]=t;
		
		}
    }

    
}
for(k=0;k<n;k++)
 printf("%d<",a[k]);   
}

