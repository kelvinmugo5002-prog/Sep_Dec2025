//simple c program
/*
Name:kelvin mugo 
Reg no:CT100/G/26219/25
Date:29/09/2025
Description:filing 
*/

#include<stdio.h>

//main function 
int main(){
//variable declaration 
char students_name,registration_number;
int total_marks;
    
FILE*prog;
//opening file
prog=fopen("results.dat","w+");

if (prog==NULL){
printf("Error occurred when opening the file.\n");
}

//prompt the user to enter 
printf("enter students name:\n");
scanf("%s",&students_name);

printf("enter registration number:\n");
scanf("%s",& registration_number);

printf("enter students total marks:\n");
scanf("%d",& total_marks);

//printing in the file for the user
fprintf(prog,"enter students name\n");
fscanf(prog,"%c",&students_name);

fprintf(prog,"enter students registration_number \n");
fscanf(prog,"%c",&registration_number);

fprintf(prog,"enter students total marks\n");
fscanf(prog,"%d",&total_marks);

fread("total_marks","registration_number","students_name",prog);

printf("Students details found in results.dat.");
fclose(prog);

return 0;
}