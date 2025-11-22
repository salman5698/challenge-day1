// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth

#include<stdio.h>
int main (){
    int l;
    int b;
    int Perimeter;
    int Area;

    printf("Enter length");
    scanf("%d", &l);

    printf("Enter breath");
    scanf("%d", &b);

    Perimeter = 2*(l + b);
    printf("Perimeter of rectange is : %d \n", Perimeter);

    Area = l*b;
    printf("Area of rectangle is : %d \n" , Area);

}