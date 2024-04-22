//Write a code in C to Calculate the percentage of 5 Subjects by user input.
#include <stdio.h>
int main(){
    float a,b,c,d,e,sum;
    printf("Enter Marks of English out of 100 : ");
    scanf("%f",&a);
    printf("Enter Marks of Physics out of 100 : ");
    scanf("%f",&b);
    printf("Enter Marks of Chemistry out of 100 : ");
    scanf("%f",&c);
    printf("Enter Marks of Maths out of 100 : ");
    scanf("%f",&d);
    printf("Enter Marks of Hindi out of 100 : ");
    scanf("%f",&e);
    sum=a+b+c+d+e;
    printf("Percentage of 5 Subject : %f",sum/5);
    return 0;
}
