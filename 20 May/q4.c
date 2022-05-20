#include <stdio.h>
struct dat{
    int day;
    int month;
    int year;

};
int calc(struct dat a,struct dat b){
    if(b.month>a.month){
        return (b.year-a.year);
    }
    else if (b.month==a.month && b.day>=a.day){
        return (b.year-a.year);
    }

    else{
        return (b.year-a.year-1);
    }
}
int main(){
    struct dat date1;
    struct dat date2;
    scanf("%d/%d/%d",&date1.day,&date1.month,&date1.year);
    scanf("%d/%d/%d",&date2.day,&date2.month,&date2.year);
    int diff=calc(date1,date2);
    printf("The difference in years is: %d",diff);
    return 0;
}
