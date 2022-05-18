// Take a string and reverse it
#include<stdio.h>
int main(){
    char a[100];
    int i,k=0;
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            for(int j=i-1;j>=k;j--)
            {
                printf("%c",a[j]);
            }
            k=i+1;
            printf(" ");
        }
            
    }
    for(int j=i;j>=k;j--)
            {
                printf("%c",a[j]);
            }
    return 0;
}