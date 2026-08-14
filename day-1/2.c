//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>
int main(){
    int a,b;
    printf("Enter the first number:\n");
    scanf("%d", &a);
    printf("enter the second number:\n");
    scanf("%d", &b);
    printf("The sum of these numbers is:%d\n",a+b);
    printf("The difference of these numbers is:%d\n",a-b);
    printf("The product of these numbers is:%d\n",a*b);
    printf("The quotient of these numbers is:%d\n",a/b);
    return 0;
}