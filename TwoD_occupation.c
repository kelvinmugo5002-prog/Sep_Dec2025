//simple c program

/*
Name:kelvin mugo 
Reg no:CT100/G/26219/25
Date:29/09/2025
Description:rooms occupancy 
*/

#include<stdio.h>

int main()
{
int floor,rooms;
int occupied=0;
int vacant=0;
int occupancy [5][10]={
                       {0,1,0,0,1,0,1,0,1,1},
                       {1,1,1,0,1,0,0,0,0,1},
                       {0,0,1,0,0,0,1,1,1,0},
                       {1,1,1,1,1,0,1,0,0,1},
                       {0,1,0,1,0,1,0,1,0,1}
                       };
for (floor=0;floor<5;floor++){
for(rooms=0;rooms<10;rooms++){
printf("%d\n",occupancy[floor][rooms]);
occupied==1;
occupied+=occupancy[floor][rooms];
vacant=50-occupied;
}
printf("\n");
}
printf("occupied is:%d\n",occupied);
printf("vacant is :%d\n",vacant);


return 0;
}