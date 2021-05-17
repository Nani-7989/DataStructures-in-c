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
        char name[32];
    }
    president={{26,4,2000},{8,9,2050},"George"};
    printf("the president %s was born on %d-%d-%d and died on %d-%d-%d",president.name,president.birthday.day,president.birthday.month,president.birthday.year,president.died.day,president.died.month,president.died.year);
    
};