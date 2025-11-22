// Q5: Write a program to convert temperature from Celsius to Fahrenheit.

#include<stdio.h>
int main(){
    float Celcius,Fahrenheit;
    printf("Enter Celcius");
    scanf("%f" , &Celcius);

    Fahrenheit = Celcius*1.8+32;
    printf("Temperature in Fahrenheit is : %.2f \n", Fahrenheit);

    return 0;

}