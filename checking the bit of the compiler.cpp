#include<stdio.h>
#include<math.h>
int main()
{
 long int a,i;
for(i=0;i<=64;i++)
{
a=pow(2,i);
printf("%u,%u\n",a,i);}
printf("after the observation it can be deduced that that it is a 64 bit compiler\n"); 	
}
