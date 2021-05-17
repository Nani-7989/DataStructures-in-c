#include<stdio.h>
    int main(){
    int x,y,z; 
    char tictactoe[3][3][3];
    for(x=0;x<3;x++)
    for(y=0;y<3;y++)
    for(z=0;z<3;z++)
    tictactoe[x][y][z]='.';

for(x=0;x<3;x++)
    for(y=0;y<3;y++){
        for(z=0;z<3;z++)
        printf("%c",tictactoe[x][y][z]);
    putchar('\n');
    }return 0;
}
