#include<stdio.h>
int main(){
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
    
    int main(){
        for(int i = 0; i<3; i++){
            printf("Enter the roll number: ");
            scanf("%d", &s[i].roll);
            printf("Enter the name of student: ");
            scanf("%s", s[i].name);
            printf("What are you providing? Marks [0], CGPA[1]: ");
            scanf("%d", s[i].flag);
            if(s[i].flag==0){
                printf("Enter the 3 marks: ");
                for(int j=0;j<3;j++){
                    scanf("%d",s[i].m.marks[j]);
                }
            }
            else if (flag==1)
            {
                printf("Enter the CGPA: ");
                scanf("%f",s[i].m.cgpa);
            }
            
        }
        for(int k = 0; k<3; k++){
            if(s[k].flag==0){
                
            }
        }
    }
}