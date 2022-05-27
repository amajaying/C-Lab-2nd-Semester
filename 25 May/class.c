// Type Casting -> Type Conversion
// int a =5, b = 2;
// int d = a/b;

// float d = (a*1.0)/b;
// float d = a/(b*1.0);
// float d = (float)a/b;


// float has higher position than long long int although it has higher size of memory!
// 

#include<stdio.h>
int main(){
    int a = 293;
    char *p = (char *)&a;
    printf("%d %d %d %d", p[0],p[1],p[2],p[3]);
}

// union data type
// enum data type