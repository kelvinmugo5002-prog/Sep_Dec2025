//simple c programm 

/*
Name:kelvin mugo
Reg no:CT100/G/26219/25
Description:loan qualification 
*/

#include<stdio.h>//scanf(),printf()

int main ()
{
int age;
int income;

//prompt user to enter age
printf(" entre age:\n");
scanf("%d",&age);

//prompt the user to enter income 
printf("entre income:\n");
scanf("%d",&income);

//check  the qualified and those not qualified for the loan
if (age >= 21 && income >= 2100)
{
printf("congratulations you quality for a loan.\n");
}else
{
printf("unfortunately, we are unable to offer you a loan at this time.\n");
}

return 0;

}