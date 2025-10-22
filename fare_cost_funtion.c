//simple c programm 

/*
Name:kelvin mugo 
Reg no:CT100/G/26219/25
Date:22/10/2025
Description:fare cost calculation 
*/

#include<stdio.h>

int calculatefare(int distance,int cost);

int main()
{
int distance, results,cost;
printf("enter distance:\n");
scanf("%d",&distance);

cost =50;
results=calculatefare(distance,cost);

printf("total fare ksh:\n%d",results);
    return 0;
}

//user defined function 
int calculatefare(int distance,int cost)
{
int total;
total=distance*cost;

return total;
}