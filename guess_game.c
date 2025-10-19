//simple c programm
/*
Name:Kelvin Mugo 
Reg no:CT100/G/26219/25
Description:guess game
*/
#include <stdio.h>
int main()
{
int secret_number=7;
int guess_number;
int attempts=1;

while(secret_number>=1,secret_number<=20,guess_number++)
{
printf("enter guess_number(1-20):\n");
scanf("%d",&guess_number);

if(guess_number>secret_number && guess_number<=20)
{
printf("Too high\n");
}
else if (guess_number<secret_number && guess_number>=1)
{
printf("Too low\n");
}
else if (guess_number ==secret_number)
{printf("Congratulations\n");
break;
}
else{
printf("out of range\n");
}
printf("your attempts:%d\n",attempts);
attempts++;
}
    return 0;
}