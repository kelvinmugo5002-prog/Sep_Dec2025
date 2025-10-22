//simple c programm 

/*
Name:kelvin mugo 
Reg no:CT100/G/26219/25
Date:22/10/2025
Description:conversion into Celsius 
*/

#include <stdio.h>

int convertToCelsius(float Fahrenheit,int b,float c);
void main ()
{
float Fahrenheit,results,Celsius;
printf("enter Fahrenheit:\n");
scanf("%f",&Fahrenheit);

results =convertToCelsius(Fahrenheit,32,5.0/9);

printf ("your Celsius:%.0f°C",results);

}

//user defined function 
int convertToCelsius(float Fahrenheit, int b,float c)
{
float total;
total=(Fahrenheit-b)*c;
return total;
}