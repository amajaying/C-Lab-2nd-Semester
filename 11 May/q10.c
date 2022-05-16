// 1/1! + 1/3! + 2/5! + 3/7! + 5/9! + 8/11!
#include<stdio.h>
int fib(int n)
{
   if (n <= 1)
      return n;
   return fib(n-1) + fib(n-2);
}

int fact(int n)  
{  
  if (n == 0)  
    return 1;  
  else  
    return(n * fact(n-1));  
}  

int main ()
{
  int n = 1;
  int sum = 0;
  int a = n;
  for (int i = 0; i <n; i++){
    sum = sum + (fib(n)/fact(a));
    a+=2;
  }
  printf("%d", sum);
  return 0;
}