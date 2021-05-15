// Online C compiler to run C program online
#include <stdio.h>


int main() {
    int grid[5][2];
    int x;
    for(x=0;x<5;x++){
        grid[x][0]=x+1;
        grid[x][1]=grid[x][0]*10;
    }
    for(x=0;x<6;x++)
    printf("The numbers are %d %d : %d",x+1,grid[x][0],grid[x][1]);
    return 0;
}