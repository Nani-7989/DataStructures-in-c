#include<stdio.h>
#include<string.h>
int main(){
int x; 
int ch;
char text[120] = "I want to be devotee of SAI BABA";

while((ch= text[x]!='\0')){
    putchar(tolower(text[x]));
    x++;
}

}