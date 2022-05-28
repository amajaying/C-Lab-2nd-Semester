#include<stdio.h>
#include<string.h>

int main()
{
	FILE *fb = fopen("a.txt","r");
    int c = fgetc(fb);
    printf("%c",c);
    fclose(fb);
    return 0;

}
