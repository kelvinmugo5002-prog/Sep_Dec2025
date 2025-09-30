//simple c programm

/*
Name:kelvin mugo 
Reg no:CT100/G/26219/25
DATE:29/09/2025
Description:exam eligibility
*/

#include<stdio.h>

int main()
{
//variable declaration 
int Attendance;
float marks; 

//prompt the user to enter Attendance 
printf("entre Attendance:\n");
scanf("%d",&Attendance);

//prompt the user to enter marks 
printf("entre your marks:\n");
scanf("%f",&marks);

//eligibility for final exams 
if (marks >= 40 && Attendance >= 75)
{
printf("eligible for final exams.");
}
else
{
printf("not eligible for final exams. ");
}
    return 0;
}