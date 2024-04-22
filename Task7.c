//write a code in C Languge to print Area of Circle by user input.
#include<stdio.h>
int main(){
    int r;
    printf("Enter Radious : ");
    scanf("%d",&r);
    float a=((3.14159265359)*r*r);
    printf("%f",a);
    return 0;
}
