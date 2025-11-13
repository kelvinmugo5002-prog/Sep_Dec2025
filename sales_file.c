//simple c program

/*
Name:kelvin mugo 
Reg no:CT100/G/26219/25
Date:29/09/2025
Description:sales
*/

#include<stdio.h>
#include <stdlib.h>

//main function 
int main()
{
int sum=0;
int i;
FILE*hdmi;
hdmi=fopen("sales.txt","w+");

if(hdmi==NULL){
perror("A problem occured when opening the file");

return 1;
}
int transactions[]={450,500,650,780,940,280,980,100,1200,1450,1600};
for(i=0;i<11;i++){ 

printf ("Transactions:ksh %d\n",transactions[i]);
fprintf(hdmi,"tansactions made:ksh %d\n",transactions[i]);
sum+=transactions[i];
}
printf("sum:%d\n",sum);
fprintf(hdmi,"Totalsales:%d\n",sum);
fclose(hdmi);
return 0;

}