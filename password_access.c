//simple c programm 

/*
Name:kelvin mugo 
Reg no:CT100/G/26219/25
Description:password security
*/

#include <stdio.h>

//main function
int main ()
{
//variable declaration 
int password=1234;
int guess_password;

do{
//prompt the user to enter password 
printf("enter guess_password:\n");
scanf("%d",&guess_password);

if(guess_password==password){
printf("access granted\n");
break;
}

else{
printf("wrong password\n");

}
}
while(guess_password==password,guess_password++);

return 0;
}