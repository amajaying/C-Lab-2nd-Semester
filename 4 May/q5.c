//Take an int array and display each element using a pointer.
#include<stdio.h>
int main(){
  int a[5];
  int *b=a;
  for (int i=0;i<5;i++){
    scanf("%d",&a[i]);
  }  

  for(int j=0;j<5;j++){
    printf("%d",b[j]);
  }  
  
  return 0;
}