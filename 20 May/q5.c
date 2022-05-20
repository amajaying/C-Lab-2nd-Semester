// Take a student structure(roll, dd,mm,yyyy, cgpa). Take 3 students info, pass it to a function which will display these 3 students as per the increasing order of their age. 
#include<stdio.h>
struct stud
{
    int roll[3];
    int age[3];
    int dd[3];
    int mm[3];
    int yy[3];
    float cgpa[3];
};

void prin(struct stud p, int q){
    printf("%d\t%d\t%d/%d/%d\t%f",p.roll[q],p.age[q],p.dd[q],p.mm[q],p.yy[q],p.cgpa[q]);
    printf("\n");
    return;
}

int main(){
    struct stud a;
    for (int i=0; i<3; i++){
        scanf("%d%d%d%d%d%f",&a.roll[i],&a.age[i],&a.dd[i],&a.mm[i],&a.yy[i],&a.cgpa[i]);
    }

    int r = 0;
    for(int i=0;i<3;i++){
        if(a.age[r]>a.age[i]){
            prin(a,r);
        }
        else if(a.age[r]<a.age[i]){
            r=i+1;
            prin(a,r);
        }
        else if(a.age[r]==a.age[i]){
            prin(a,r);
            r=i+1;
        }
    }
}
