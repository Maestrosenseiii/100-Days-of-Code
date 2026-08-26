//Q5: Write a program to convert temperature from Celsius to Fahrenheit.


#include <stdio.h>

int main(){
    int c;
    printf("Enter the temperature in celsius:\n");
    scanf("%d", &c);
    printf("The temperature %d C in fahrenheit is:%d F",c,(9/5)*c+32);
    return 0;
}