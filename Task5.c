//Write a Code in C to Print Volume of a Sphere by user Input.
#include<stdio.h>
int main(){
    float r,v;
    printf("Enter Radius :");
    scanf("%f",&r);
    v = (4)*(3.14159265359)*(r*r*r)/3;
    printf("The Volume is : %f",v);
    return 0;
}
