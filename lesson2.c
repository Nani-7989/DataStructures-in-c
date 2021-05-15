#include<stdio.h>
void show(char b[]){
int a;
for(a=0;a<6;a++){
	b[a]++;
	putchar(b[a]);
	}
}

int main(){
int x; 
char text[] ="Gdkkn ";
for(x=0;x<6;x++){
	show(text);
	} 
}