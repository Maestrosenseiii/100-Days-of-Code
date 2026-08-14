//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/


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