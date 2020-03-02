#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	char str[100];
	int count,len;
	int palinstr(char *,int);
	printf("enter the string which is to be checked for palindrome\n");
	scanf("%s",str);
	len=strlen(str);
	count=palinstr(&str[0],len);
	if(count==1)
	printf("the string is palindrome\n");
	else 
	printf("the string is not palindrome\n");
	
	
}
int palinstr(char *string,int length)
{
    char revstr[100];
    int i,flag;
    for(i=0;i<length;i++)
    {
    	revstr[length-1-i]=string[i];//string[i]=*(i+string)
	}
	for(i=0;i<length;i++)
	{
	    if(revstr[i]==string[i])
	        flag=1;
	    else
		{
			flag=0;
			break;
		}
    }
    return flag;
	
}
