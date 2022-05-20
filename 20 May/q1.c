#include<stdio.h>
struct date
{
    int day;
    int mon;
    int year;
};

int main(){
    struct date s;
    scanf("%d/%d/%d",&s.day,&s.mon,&s.year);
    printf("%d/%d/%d",s.day,s.mon,s.year);
    
}
