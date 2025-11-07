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
char title;
FILE *libra;
libra=fopen("borrowed_books.txt","w");
printf("enter the title of the book\n");
scanf("%c",&title);

//outputting in a file
fprintf(libra,"The user entered title is :%c\n",title);

printf("Found in borrowed_books.txt file \n");
fclose("libra");
return 0;
}