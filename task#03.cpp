#include<stdio.h>
int main ()
{
	int balance=50000, withdraw=0;
	printf("\n ==ATM Withdrawal Program== ");
	while(balance>0)
	{
		printf("\n Enter the amount to withdraw:");
		scanf("%d",&withdraw);
		if (withdraw>balance)
		printf("\n Insufficient Balance! Your current balance is %d",balance);
		else 
		{
		balance-=withdraw;
		printf("\n Withdraw successful! Your current balance is %d",balance);
		}
	}
	printf("\n Your Bank Balance is 0! No withdraw is possible.");
	return 0;
}
