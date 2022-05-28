#include <stdio.h>

struct teacher {
    char tname[20];
    char s1name[20];
    char s2name[20];
    int s1mark;
    int s2mark;
    float avg[2];
}a[2];

int main(){
    struct teacher a[2];

    for(int i=0; i<2; i++){
        printf("Enter the name of the teacher: ");
        scanf("%s", a[i].tname);
        printf("Enter the name of the first student: ");
        scanf("%s", a[i].s1name);
        printf("Enter the name of the second student: ");
        scanf("%s", a[i].s2name);
        printf("Enter the marks of the first student: ");
        scanf("%d", &a[i].s1mark);
        printf("Enter the marks of the second student: ");
        scanf("%d", &a[i].s2mark);
    }

    int sum[2]={0};

    for(int i=0; i<2; i++){
        sum[i] = a[i].s1mark + sum[i];    
    }

    for(int i=0; i<2; i++){
        a[i].avg[i] = sum[i]/2;
    }
    int max[2]={0};
    for(int i=0; i<2; i++){
        if(a[i].s1mark>a[i].s2mark){
            max[i] = a[i].s1mark;
        }
        else{
            max[i] = a[i].s2mark;
        }
    }

    printf("Average Marks Secured under:\nTeacher 1: %.2f\nTeacher 2: %.2f\n\n", a[0].avg[0], a[1].avg[1]);
    printf("Highest Marks Secured under:\nTeacher 1: %d\nTeacher 2: %d\n", max[0], max[1]);
}