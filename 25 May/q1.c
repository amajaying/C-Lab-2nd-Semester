// Create a structure ( roll, name, union(marks[3], CGPA)). Take such 3 student's informations and send this details to a function which will arrange these 3 students in ascending order of their mark/CGPA and return back to main where the main function has to display the details in increasing order.

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
    
    void display(struct stu a[3]){
        printf("The Ascending Order:\n");
        if (a[0].m.cgpa <= a[1].m.cgpa && a[1].m.cgpa <= a[2].m.cgpa){
            printf("%d %s %.2f\n",a[0].roll,a[0].name,a[0].m.cgpa);
            printf("%d %s %.2f\n",a[1].roll,a[1].name,a[1].m.cgpa);
            printf("%d %s %.2f\n",a[2].roll,a[2].name,a[2].m.cgpa);
  }
  else{

    if (a[0].m.cgpa <= a[2].m.cgpa && a[2].m.cgpa <= a[1].m.cgpa){
            printf("%d %s %.2f\n",a[0].roll,a[0].name,a[0].m.cgpa);
            printf("%d %s %.2f\n",a[2].roll,a[2].name,a[2].m.cgpa);
            printf("%d %s %.2f\n",a[1].roll,a[1].name,a[1].m.cgpa);
    }
    else{

      if (a[1].m.cgpa <= a[0].m.cgpa && a[0].m.cgpa <= a[2].m.cgpa){
            printf("%d %s %.2f\n",a[1].roll,a[1].name,a[1].m.cgpa);
           printf("%d %s %.2f\n",a[0].roll,a[0].name,a[0].m.cgpa);
            printf("%d %s %.2f\n",a[2].roll,a[2].name,a[2].m.cgpa);
      }
      else{

        if (a[1].m.cgpa <= a[2].m.cgpa && a[2].m.cgpa <= a[0].m.cgpa){
            printf("%d %s %.2f\n",a[1].roll,a[1].name,a[1].m.cgpa);
            printf("%d %s %.2f\n",a[2].roll,a[2].name,a[2].m.cgpa);
           printf("%d %s %.2f\n",a[0].roll,a[0].name,a[0].m.cgpa);

        }
        else{

          if (a[2].m.cgpa <= a[0].m.cgpa && a[0].m.cgpa <= a[1].m.cgpa){
            printf("%d %s %.2f\n",a[2].roll,a[2].name,a[2].m.cgpa);
           printf("%d %s %.2f\n",a[0].roll,a[0].name,a[0].m.cgpa);
            printf("%d %s %.2f\n",a[1].roll,a[1].name,a[1].m.cgpa);

          }
          else{
            if (a[0].m.cgpa == a[1].m.cgpa && a[1].m.cgpa == a[2].m.cgpa){
              printf("%d %s %.2f\n",a[0].roll,a[0].name,a[0].m.cgpa);
            printf("%d %s %.2f\n",a[1].roll,a[1].name,a[1].m.cgpa);
            printf("%d %s %.2f\n",a[2].roll,a[2].name,a[2].m.cgpa);
            }
            else{            
            printf("%d %s %.2f\n",a[2].roll,a[2].name,a[2].m.cgpa);
            printf("%d %s %.2f\n",a[1].roll,a[1].name,a[1].m.cgpa);
            printf("%d %s %.2f\n",a[0].roll,a[0].name,a[0].m.cgpa);
            }
          }
        }
      }
    }
}
    }
    int main(){
        struct stu c[3];
        for(int i = 0; i<3; i++){
            printf("Enter the roll number: ");
            scanf("%d", &c[i].roll);
            printf("Enter the name of student: ");
            scanf("%s", c[i].name);
            printf("What are you providing? Marks [0], CGPA[1]: ");
            scanf("%d", &c[i].flag);
            if(c[i].flag==0){
                printf("Enter the 3 marks: ");
                for(int j=0;j<3;j++){
                    scanf("%d",&c[i].m.marks[j]);
                }
            }
            else if (c[i].flag==1)
            {
                printf("Enter the CGPA: ");
                scanf("%f",&c[i].m.cgpa);
            }
            
        }
        int sum = 0;
            for(int k = 0; k<3; k++){
                if(c[k].flag==0){
                    for(int l = 0; l<3; l++){
                            sum = sum + c[k].m.marks[l];
                        }
                c[k].m.cgpa = (sum/30)+1;
                }
        }
        
        display(c);
    }