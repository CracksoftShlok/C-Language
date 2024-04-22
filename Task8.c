//wirte a code in C Lang to find SI using User input.
#include<stdio.h>
int main(){
    float p,r,t,si;
    printf("Enter P: ");
    scanf("%f",&p);
    printf("Enter R: ");
    scanf("%f",&r);
    printf("Enter T: ");
    scanf("%f",&t);
    si=(p*t*t)/100;
    printf("SI: %f",si);
    return 0;
}
