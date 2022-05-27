#include<stdio.h>
    struct stu
    {
        int roll;
        char name[20];
        int flag;
        union mark
        {
            int marks[3];
            float cgpa;
        }m;
    }s[3];
    
    int display(struct stu a[3]){
        printf("%d\t%s\t%f", a[0].roll,a[0].name,a[0].m.cgpa);
    }
    int main(){
        struct stu c;
        for(int i = 0; i<3; i++){
            printf("Enter the roll number: ");
            scanf("%d", &s[i].roll);
            printf("Enter the name of student: ");
            scanf("%s", s[i].name);
            printf("What are you providing? Marks [0], CGPA[1]: ");
            scanf("%d", &s[i].flag);
            if(s[i].flag==0){
                printf("Enter the 3 marks: ");
                for(int j=0;j<3;j++){
                    scanf("%d",&s[i].m.marks[j]);
                }
            }
            else if (s[i].flag==1)
            {
                printf("Enter the CGPA: ");
                scanf("%f",&s[i].m.cgpa);
            }
            
        }
        int sum = 0;
        for(int k = 0; k<3; k++){
            for(int l = 0; l<3; l++){
                if(s[k].flag==0){
                    sum = sum + s[k].m.marks[l];
                }
            }
            s[k].m.cgpa = (sum/3)*10;
        }
        display(c);
    }