//write a program to find and display the sum of first n natural numbers.


#include <stdio.h>

int main(){
   int a;
    printf("Enter the n for sum of first n natural numbers:\n");
    scanf("%d",&a);
    printf("The sum of first %d natural numbers is:%d\n",a,a*(a+1)/2);
    return 0;
}