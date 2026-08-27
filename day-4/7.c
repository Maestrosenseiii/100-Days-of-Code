//Write a program to swap two numbers without using a third variable.

#include<stdio.h>
int main(){
int a,b;
 printf("Enter the first number:\n");
 scanf("%d",&a);
 printf("enter the second number:\n");
 scanf("%d",&b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("after swapping:\n");
 printf("%d\n",a);
 printf("%d\n",b);
    return 0;
}
