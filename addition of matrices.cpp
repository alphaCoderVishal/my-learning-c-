#include<stdio.h>
#include<math.h>
int main ()
{
	int i,j,k,l,m,n,o,p,q,r,s;
	
	printf("to perform the addition of two matrices\n ");
	printf("enter the rows and column of first matrix\n");
	scanf("%d%d",&i,&j);
	printf("enter the rows and column of second matrix\n");
	scanf("%d%d",&k,&l);
	float a[i][j],b[k][l],add[i][j];
	if(i!=k|| j!=l)
	{
		printf("the matrix addition is not possible\n");
	}
	else 
	{
	   	for(q=0;q<i;q++)
	  	{
			for(r=0;r<j;r++)
			{
				scanf("%f",&a[q][r]);
			}
			for(s=0;s<j;s++)
			scanf("%f",&b[q][s]);
		}
	for(m=0;m<i;m++)
	{
		for(n=0;n<j;n++)
		{
			add[m][n]=(a[m][n]+b[m][n]);
		}
    }
    printf("the added matrix is\n");
    for(o=0;o<i;o++)
    {
    	for(p=0;p<j;p++)
    	{
    		printf("%f ",add[o][p]);
		}
		printf("\n");
	}
	}
}
