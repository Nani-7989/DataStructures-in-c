#include<stdio.h>
#include<string.h>

int main(){
    struct date{
        int day;
        int month;
        int year; 
    };
    struct person{
        struct date birthday;
        char name[32];
     
    };
    struct person president;
    
    president.birthday.day= 26;
    president.birthday.month = 04;
    president.birthday.year=2000;
    strcpy(president.name,"Gana");
    printf("the president %s was born on %d-%d-%d",president.name,president.birthday.day,president.birthday.month,president.birthday.year);
    return 0;
}