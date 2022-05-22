//Take 3 student information related  to the above question and find out the average marks and min mark in the whole class.

#include<stdio.h>

int min(int a,int b,int c){
    if(a<b && a<c){
        return a;
    }
    else if(b<a && b<c){
        return b;
    }
    else{
        return c;
    }
}

int max(int a,int b,int c){
    if(a>b && a>c){
        return a;
    }
    else if(b>a && b>c){
        return b;
    }
    else{
        return c;
    }
}
int main(){
    struct student
    {
        char name[20];
        int m[3];
        int min;
        int max;
    }s1,s2,s3;

    printf("Enter the name of the student 1: ");
    scanf("%s",s1.name);
    printf("Enter the marks of the student 1 in 3 subjects: ");
    scanf("%d%d%d",&s1.m[0],&s1.m[1],&s1.m[2]);
    printf("Enter the name of the student 2: ");
    scanf("%s",s2.name);
    printf("Enter the marks of the student 2 in 3 subjects: ");
    scanf("%d%d%d",&s2.m[0],&s2.m[1],&s2.m[2]);
    printf("Enter the name of the student 3: ");
    scanf("%s",s3.name);
    printf("Enter the marks of the student 3 in 3 subjects: ");
    scanf("%d%d%d",&s3.m[0],&s3.m[1],&s3.m[2]);

    float avg1,avg2,avg3;
    avg1=(s1.m[0]+s1.m[1]+s1.m[2])/3;
    avg2=(s2.m[0]+s2.m[1]+s2.m[2])/3;
    avg3=(s3.m[0]+s3.m[1]+s3.m[2])/3;
    float avg=(avg1+avg2+avg3)/3;
    printf("The average marks of the class is %f\n",avg);

    s1.min=min(s1.m[0],s1.m[1],s1.m[2]);
    s2.min=min(s2.m[0],s2.m[1],s2.m[2]);
    s3.min=min(s3.m[0],s3.m[1],s3.m[2]);
    int minc=min(s1.min,s2.min,s3.min);
    printf("The minimum marks of the class is %d\n",minc);

    s1.max=max(s1.m[0],s1.m[1],s1.m[2]);
    s2.max=max(s2.m[0],s2.m[1],s2.m[2]);
    s3.max=max(s3.m[0],s3.m[1],s3.m[2]);
    int maxc=max(s1.max,s2.max,s3.max);
    printf("The maximum marks of the class is %d\n",maxc);
    return 0;
}