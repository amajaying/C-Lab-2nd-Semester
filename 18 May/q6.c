// Write a structure for student[name, roll, 3 subjects mark]. Display the name, roll and
// average marks.
#include<stdio.h>
int main(){
    struct stu
    {
        char name[20];
        int roll;
        int marks[3];
    }n;

    scanf("%s",n.name);
    scanf("%d",&n.roll);
    int avg=0;
    for(int i=0; i<3; i++){
        scanf("%d",&n.marks[i]);
        avg=avg+n.marks[i];
    }
    
    printf("Name: %s\nRoll: %d\nAverage Marks: %d",n.name,n.roll,(avg)/3);
    
}