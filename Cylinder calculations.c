//simple c programm 

/*
Name:kelvin mugo 
Reg no:CT100/G/26219/25
Description:v=pi*r²*h
*/

#include <stdio.h>
int main ()
{
float pi;
float radius;
float height;
float volume;
float SA;
//the volume of the cylinder is pi*radius *radius*height;
//the SA of the cylinder is 2*pi*radius *radius +2*pi*radius*height;

//prompt the user to enter pi
printf("enter pi:");
scanf("%f",&pi);

//prompt the user to entre radius 
printf("enter radius:");
scanf("%f",&radius);

//prompt the user to enter height
printf("entre height:");
scanf("%f",&height);

//calculate the volume of the cylinder 
volume=pi*radius*radius*height;
//calculate the SA of the cylinder 
SA=2*pi*radius*radius+2*pi*radius*height;

//display volume and SA 
printf("\n volume is: %f",volume);
printf("\n SA is: %f",SA);

return 0;

}