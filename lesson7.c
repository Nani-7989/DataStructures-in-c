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
        struct date died;
        char name[33];
    };
    struct person president; 
    
    president.birthday.day = 26;
    president.birthday.month = 04;
    president.birthday.year = 2000;
    president.died.day = 8;
    president.died.month= 9;
    president.died.year = 2050;
    strcpy(president.name,"Mitchell");

printf("the president %s was born on %d-%d-%d and died on %d-%d-%d",president.name,president.birthday.day,president.birthday.month,president.birthday.year,president.died.day,president.died.month,president.died.year);
return 0;
}