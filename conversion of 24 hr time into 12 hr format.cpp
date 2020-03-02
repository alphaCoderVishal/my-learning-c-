#include <stdio.h>
main ()
{
	int ss,mm,hh;
	printf("to convert 24 hrs time format into 12 hr format\n");
	printf("enter the time in 24 hrs format i.e hh,mm,ss\n");
	scanf("%d%d%d",&hh,&mm,&ss);
	printf("your input time is %d:%d:%d\n",hh,mm,ss);
	printf("make sure input value is in the range i.e 0<=hh<24,0<=mm<60,0<=ss<60\n");
	if (hh<12)
	{
		printf("the required time is %d:%d:%d am",hh,mm,ss);
	}
	else 
		printf("the required time is %d:%d:%d pm",(hh-12),mm,ss);
		
		
	return 0;
}
