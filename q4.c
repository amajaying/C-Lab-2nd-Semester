//WARF to display the following series x y x+y x+2y 2x+3y 3x+5y
#include<stdio.h>

int dis(int a, int b){
    int c=a+b;
    a=b;
    b=c;
    printf("%dx+%dy\n",a,b);
    if(a<8){
        dis(a,b);
    }
    return 0;
}
int main(){
    int a=1,b=1;
    printf("x y\nx+y\n");
    dis(a,b);

}