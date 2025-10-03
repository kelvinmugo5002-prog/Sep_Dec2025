//simple c programm 

/*
Name:kelvin mugo 
Reg no:CT100/G/26219/25
Date:29/09/2025
Description:data bundles offer 
*/

#include <stdio.h>

//main function 
int main ()
{
//variable declaration 
float bundles;
float choice;
double cost;
char invalid_choice;
//prompt the user to enter the choice
printf("enter your choice(1-4):\n");
scanf("%f",&choice);

//print the following  following 
printf("select your choice\n");
printf("1. 100Mb @ ksh50\n");
printf("2. 500MB @ ksh200\n ");
printf("3. 1GB @ ksh 350\n");
printf("4. 2GB @ ksh600\n");

//use switch statement to display below

if(choice==1000)
{
bundles =100;//MB
cost =50;
}
else if (choice ==2)
{
bundles =500;
cost =200;//MB
}
else if (choice==3)
{
bundles =1000;
cost =350;//MB
}
else if (choice==4)
{
bundles =2000;//GB
cost =600;
}
else 
{
cost =0;
bundles =0;
printf("invalid_choice\n");
}

//output cost and bundles
printf("bundles %.0fMB \n",bundles);
printf("cost ksh:%.0lf \n",cost);
return 0;

}