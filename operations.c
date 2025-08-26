#include<stdio.h>
int main()
{
      int num1,num2;int sum,difference,prod; float div;
    printf("enter first number =  ");
    scanf("%d",&num1);
     printf("enter second number =  ");
    scanf("%d",&num2);
    sum =num1+num2;
     printf("sum of two numbers is = %d \n",sum);
    if(num1>num2)
    {
        difference=num1-num2;
    }
    else
    {
        difference=num2-num1;
    }
    printf("difference of two numbers is = %d \n",difference);
    prod=num1*num2;
    printf("product of two numbers is = %d \n",prod);
    if(num2==0)
    {
        printf("value not defined");
    }
    else
    {
        div=num1/num2;
        printf("division of two numbers is = %f",div);
    }
    return 0;
}