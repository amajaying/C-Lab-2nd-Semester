#include<stdio.h>
// void dis(char *p){
//     if(*p=='\0')
//         return;
    
//     // printf("%c",*p);
//     dis(p+1);
//     printf("%c",*p);
// }
int main(){
    // char x[100]="ABCD";
    // dis(x);
}

// Structure:
// The structure is a user defined data type which consists of different types of member variable.
// struct <name of struct>{
//     member variable 1;
//     member variable 2;
// }
// Assignment operator
struct stu s{
    char name[20];
    int roll;
    int age;
    char gender;
    float cgpa;
}
