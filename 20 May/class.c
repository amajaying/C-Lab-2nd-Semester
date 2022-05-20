#include<stdio.h>
// int main(){
//     struct stu{
//         int roll; 
//         int age;
//         char name[20];
//     };
//     struct stu s[3];

//     for (int i=0; i<4; i++){
//         scanf("%d%d",&s[i].roll, &s[i].age);
//     }

//     for (int i=0; i<4; i++){
//         printf("%d %d \n",s[i].roll, s[i].age);
//     }
// }

// struct stu
// {   
//     int roll;
//     int age;
//     float cgpa;
// };

// int main(){

// struct stu s[3];
// struct stu *p;
// scanf("%d",p->roll);
// printf("%d",p->roll);

// }

struct stu{
    int roll;
    float mark[3];
    float avz;
};

void avg(struct stu *a){
    float av=0;
    for(int i =0; i<3; i++){
        av=av+a->mark[i];
    }
    a->avz=av/3;
    
}

int main(){
    struct stu s;
    scanf("%d",&s.roll);
    for(int i=0;i<3;i++)   
        scanf("%f",&s.mark[i]);   
    avg(&s);
    printf("%f",s.avz);
}