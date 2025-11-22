// Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>
int main(){
    int Radius;
    float Area;
    float Circumference;

    printf("Enter radius");
    scanf("%d", &Radius);

    Area = 3.14*Radius*Radius;
    printf("Area of circle is : %f \n",Area);



    return 0;



}



