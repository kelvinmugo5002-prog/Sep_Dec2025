//simple c program

/*
Name:kelvin mugo 
Reg no:CT100/G/26219/25
Date:29/09/2025
Description:vacancy and occupied 
*/

#include<stdio.h>

int main()
{
int block,floor,rooms;
int occupied=0;
int vacant=0;
int chain[3][5][10]={
                       {
                       {0,1,0,0,1,0,1,0,1,1},
                       {1,1,1,0,1,0,0,0,0,1},
                       {0,0,1,0,0,0,1,1,1,0},
                       {1,1,1,1,1,0,1,0,0,1},
                       {0,1,0,1,0,1,0,1,0,1}
                       },
                       {
                       {0,1,0,0,1,0,1,0,1,1},
                       {1,1,1,0,1,0,0,0,0,1},
                       {0,0,1,0,0,0,1,1,1,0},
                       {1,1,1,1,1,0,1,0,0,1},
                       {0,1,0,1,0,1,0,1,0,1}
                       },
                       {
                       {0,1,0,0,1,0,1,0,1,1},
                       {1,1,1,0,1,0,0,0,0,1},
                       {0,0,1,0,0,0,1,1,1,0},
                       {1,1,1,1,1,0,1,0,0,1},
                       {0,1,0,1,0,1,0,1,0,1}
                       },
                       };
for (block=0;block<3;block++){                      
for (floor=0;floor<5;floor++){
for(rooms=0;rooms<10;rooms++){
printf("%d\n",chain[block][floor][rooms]);
occupied==1;
occupied+=chain[block][floor][rooms];
vacant=140-occupied;
}
printf("\n");
}
}
printf("occupied is:%d\n",occupied);
printf("vacant is :%d\n",vacant);

    return 0;
}