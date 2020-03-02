#include<stdio.h>
#include <math.h>
int main()
{
int year,months,days,remainingdays;
printf("to convert days into years, months, remaining days\n");
scanf("%d",&days);
if (days%365==0)
{
	printf("the required days can be exactly converted into years\n");
	printf("the required years are :%d\n",days/365);
	}
	else
	{
		printf("the required days can be converted into year,months,remainingdays\n");
		printf("the required years:%d\n",days/365);
		if (((days%365))%30==0)
		printf("the required months:%d\n",(((days%365))%30==0));
		else
		printf("the required months,days :%d,%d\n",((days%365))/30,((days%365))%30);
		}	
	
}
