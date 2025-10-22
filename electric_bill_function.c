//simple c program

/*
Name:kelvin mugo 
Reg no:CT100/G/26219/25
Date:22/10/2025
Description:electric bills payment 
*/

#include<stdio.h>
int calculateelectricbill(float cost);

int main()
{
int units,results,cost;

printf("enter units used :\n");
scanf("%d",&units);

if(units<=100)
{
cost=10*units;
}
else if (units >=100 && units<=200)
{
cost=10*1000+(units -100)*15;
}
else if (units>200)
{
cost =10*100 +100*15+(units-200)*20;
}
results= calculateelectricbill(cost);
printf("bill required Ksh:%d",results);

   return 0;
}

//user defined function 
int calculateelectricbill(float cost)
{
int bill;
bill=cost;
return bill;
}