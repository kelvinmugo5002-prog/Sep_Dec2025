//simple coding program 

/*
Name:kelvin mugo 
Reg no:CT100/G/26219/25
Description withdrawals in the bank.
*/

#include <stdio.h>

int main ()
{
int balance=1000;
int withdrawal ;

printf("the current balance is:%d\n",balance);

while(balance>0){
printf("enter withdrawal:\n");
scanf("%d",&withdrawal);
balance-=withdrawal;
printf("balance after withdrawal is: %d\n", balance);
}
if (balance <withdrawal)
{
printf("insufficient balance");
}

return 0;

}