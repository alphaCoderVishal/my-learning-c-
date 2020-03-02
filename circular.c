#include<stdio.h>
#include<stdlib.h>

#define max 100
int rear=-1;
int front=-1;
int array[max];
void delete(void)
{
    if(front<=-1)//some case to be included
    printf("the array is empty\n ");
    else
    ++front;
}
void enqueue(void)
{
    int element;
    printf("enter the elements \n");
    scanf("%d",&element);
    if(rear>=max-1)
    printf("the array is full");
    else
    {
       array[++rear] =element;

    }
}
int main()
{
printf("enter e to exit,d to delete and i to enqueue\n");
char opt;

while(1)
{
 scanf(" %c",&opt);

switch(opt)

    {

    case 'i':enqueue();
             break;

    case'd':delete();
            break;
    case 'e':
            exit(0);
            break;
    case 'p' :for(int i=front;i<=rear;i++)
              printf("%d ",array[i]);
              break;
    default :printf("invalid \n");
             break;
    }
    printf("enter e to exit,d to delete and i to enqueue and p to print the data\n");
}

}

