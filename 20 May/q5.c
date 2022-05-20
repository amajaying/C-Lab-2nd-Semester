// Take a student structure(roll, dd,mm,yyyy, cgpa). Take 3 students info, pass it to a function which will display these 3 students as per the increasing order of their age. 
#include<stdio.h>
struct stud
{
    int roll[3];
    int dd[3];
    int mm[3];
    int yy[3];
    float cgpa[3];
};

int main(){
    struct stud a;
    for (int i=0; i<3; i++){
        scanf("%d%d%d%d%f",&a.roll,&a.dd,&a.mm,&a.yy,&a.cgpa);
    }
}
