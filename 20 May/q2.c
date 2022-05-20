// Write a structure for a date which will take your date of birth and pass this date to a function which will calculate your age and return the age to main function.

#include <stdio.h>
struct dob{
    int day;
    int month;
    int year;

};
int calc(struct dob a){
    int cday=20,cmonth=5,cyear=2022;
    if(cmonth>a.month){
        return (cyear-a.year);
    }
    else if(cmonth==a.month && cday>=a.day){
        return (cyear-a.year);
    }
    else{
        return (cyear-a.year-1);
    }

}
int main(){
    struct dob db;
    scanf("%d/%d/%d",&db.day,&db.month,&db.year);
    int diff=calc(db);
    printf("Your age is: %d",diff);
    return 0;
    }