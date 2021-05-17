#include<stdio.h>
    int main(){
    int x,y; 
    char tictactoe[3][3];
    for(x=0;x<3;x++)
    for(y=0;y<3;y++)
    tictactoe[x][y]='.';

for(x=0;x<3;x++){
    for(y=0;y<3;y++)
    printf("%c",tictactoe[x][y]);
    putchar('\n');
    }return 0;
}