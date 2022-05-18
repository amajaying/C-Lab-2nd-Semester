// Write a Recursive funtion to display all the integers present in an array.
#include<stdio.h>
int dis(int *c, int start, int len){
    if(start>len){
        return 0;
    }
    printf("%d",c[0]);  
    dis(c+1,start+1,len);
}

int main(){
    int a[5]={9,2,3,4,5};
    dis(a,1,5);
}