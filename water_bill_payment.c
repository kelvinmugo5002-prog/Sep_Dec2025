//simple c program

/*
Name:kelvin mugo 
Reg no:CT100/G/26219/25
Date:29/09/2025
Description:water bills payment 
*/

#include<stdio.h>

//main function 
int main()
{
//variable declaration
float water_bill_units;
double total_cost;
float cost_per_unit;

//prompt the user to enter water_bill_units
printf("enter water_bill_units:\n");
scanf("%f",&water_bill_units);

//entre ksh per unit
//total_cost=cost_per_unit*total units
if(water_bill_units>=0 && water_bill_units <= 30)
{
cost_per_unit=20;
total_cost =cost_per_unit *water_bill_units;
}
else if(water_bill_units>=31 && water_bill_units <= 60)
{
cost_per_unit=25;
total_cost=cost_per_unit*water_bill_units;
}
else if(water_bill_units > 60)
{
cost_per_unit= 30;
total_cost =cost_per_unit *water_bill_units;
;
}
printf("total_cost is %.2lf",&total_cost);

return 0;

}