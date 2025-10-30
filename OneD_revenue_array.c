//1D arrays

/*
Name:Kelvin Mugo Ituga 
Reg no:CT100/G/26219/25
Description:1D array
*/

#include <stdio.h>

int main ()
{
int i;
int sum=0;
int average_revenue;
float revenue[7]={2400,2500,2700,2600,2800,3000,3600};

for(i=0;i<=6;i++)
{
printf("daily revenue is:%.0f\n",revenue[i]);
sum=sum+revenue[i];
average_revenue=sum/7;
}
printf("the sum is: %d\n",sum);
printf("average revenue is:%d\n",average_revenue);
return 0;
}