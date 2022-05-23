// Take a student structure(roll, dd,mm,yyyy, cgpa). Take 3 students info, pass it to a function which will display these 3 students as per the increasing order of their age. 

#include<stdio.h>
struct student{
    int rollno;
    int dd,mm,yy;
    float cgpa;
};

void display1(struct student s[],int i){
    printf("%d\t",s[i].rollno);
    printf("%d\t",s[i].dd);
    printf("%d\t",s[i].mm);
    printf("%d\t",s[i].yy);
    printf("%f\n",s[i].cgpa);
}
void display(struct student s[]){
        if(s[0].yy>s[1].yy && s[0].yy>s[2].yy)
        {
            display1(s,0);
            if (s[1].yy>s[2].yy)
            {
                display1(s,1);
                display1(s,2);
            }
            else
            {
                display1(s,2);
                display1(s,1);
            }
        }
        else if(s[1].yy>s[0].yy && s[1].yy>s[2].yy)
        {
            display1(s,1);
            if (s[0].yy>s[2].yy)
            {
                display1(s,0);
                display1(s,2);
            }
            else
            {
                display1(s,2);
                display1(s,0);
            }
        }
        else
        {
            display1(s,2);
            if (s[0].yy>s[1].yy)
            {
                display1(s,0);
                display1(s,1);
            }
            else
            {
                display1(s,1);
                display1(s,0);
            }
        }
}
int main(){
    struct student s[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the student rollno: ");
        scanf("%d",&s[i].rollno);
        printf("Enter the student birth day: ");
        scanf("%d",&s[i].dd);
        printf("Enter the student birth month: ");
        scanf("%d",&s[i].mm);
        printf("Enter the student birth year: ");
        scanf("%d",&s[i].yy);
        printf("Enter the student cgpa: ");
        scanf("%f",&s[i].cgpa);
    }
    printf("Roll\tDay\tMonth\tYear\tGPA\n");
    printf("------------------------------------\n");
    display(s);
    return 0;
}