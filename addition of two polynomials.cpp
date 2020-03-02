#include<stdio.h>
#include<math.h>
int main()
{
   typedef struct poly
   {
   	int coeff;
   	int exp;
   };
   int num1,i=0,num2,j=0,k=0,num3,l;
   poly polyterm1[100],polyterm2[100],polyterm3[100];
   printf("enter the number of terms of first coeff \n");
   scanf("%d",&num1);
   printf("enter the terms of first coeff with exponent\n");
   for (l=0;l<num1;l++)
    {
     	scanf("%d%d",&polyterm1[l].coeff,&polyterm1[l].exp);	
    	
	}
	 printf("enter the number of terms of second coeff \n");
    scanf("%d",&num2);
    printf("enter the terms of second coeff with exponent\n");
   for (l=0;l<num2;l++)
    {
     	scanf("%d%d",&polyterm2[l].coeff,&polyterm2[l].exp);	
    }
    while(i<num1&&j<num2)
    
    {
    	if(polyterm1[i].exp>polyterm2[j].exp)
		{
		 	polyterm3[k]=polyterm1[i];
		 	
			k++,i++; 	
		}
		else
		{
			if(polyterm1[i].exp==polyterm2[j].exp)
			{
			 	polyterm3[k].coeff=(polyterm1[i].coeff+polyterm2[j].coeff);
			 	polyterm3[k].exp=polyterm1[i].exp;
				 k++,i++,j++;	
			}
			else
			{
				polyterm3[k]=polyterm2[j];
		 	
			k++,j++; 		
			}
		}
   }
	while(i<num1||j<num2)
	{
    	if(num1==i)
		{	
	    	polyterm3[k].exp=polyterm2[j].exp;
	    	polyterm3[k].coeff=polyterm2[j].coeff;
	   		 k++,j++;
   		}
		else
		{
	    	polyterm3[k].exp=polyterm1[i].exp;
	    	polyterm3[k].coeff=polyterm1[i].coeff;
	   	 	k++,i++;
    	}
	}
    num3=k;
	for(i=0;i<num3-1;i++)
	{
        if(polyterm3[i].coeff!=0)
		printf("%d(x^%d)+",polyterm3[i].coeff,polyterm3[i].exp);
    }
		printf("%d(x^%d)",polyterm3[num3-1].coeff,polyterm3[num3-1].exp);
		printf("\n");
		printf("  ");
		
	for(i=0;i<num3;i++)
	
	    printf("%d  ",polyterm3[i].exp);
	    printf("\n");
      
	    for(i=0;i<num3;i++)
		printf("%dX+",polyterm3[i].coeff);	
	printf("last statement");
}
