#include<stdio.h>
#include<math.h> 
#include<iostream>
using namespace std;
class Bankaccount
{
	private:
		char name[100];
		int accountnumber;
		char accounttype[50];
		int balance;
	public:
		Bankaccount()
		{
			printf(" enter name,accountnumber,accounttype,balance respectively\n");
			scanf("%s%d%s%d",name,&accountnumber,accounttype,&balance);
		}
		void deposit(void)
		{
			int amount;
			cout<<"enter the amount to be deposited\n";
			cin>>amount;
			balance+=amount;
		}
		void withdraw(void);
		void display(void);
		
};
void Bankaccount::withdraw(void)
{
	printf("your balance is %d",balance);
	char rand;
	int withdraw;
	
	cout<<"press C to withdraw and A to don't withdraw\n";
	cin>>rand;
	switch(rand)
	{
		case('A'):
			cout<<"thanks for the transaction\n";
			break;
		case('C'):
			cout<<"enter the amount to be withdrawn\n";
			cin>>withdraw;
			balance-=withdraw;;
			cout<<"your remaining balance is :"<<balance;
		    break;
		default:
		cout<<"invalid entry\n";	 
        }
    }
void Bankaccount::display()
{
	cout<<name<<endl;
	cout<<balance<<endl;
}
    
	

int main(void)
{
	Bankaccount account1;
	int i;
	cout<<"press 1 to deposit \n press 2 to widhdraw\n";
	scanf("%d",&i);
	if(i==1)
	{
		account1.deposit();
    }
	else if(i==2)
	{
		account1.withdraw();
		
    }
	else
	cout<<"invalid entry\n";
	account1.display();

	return 0;	
}
