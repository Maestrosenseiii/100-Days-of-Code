//write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>

int main(){
    int r;
    float p=3.14;
    printf("Enter the radius of the circle:\n");
    scanf("%d", &r);
    printf("The area of the circle is:%.2f\n",p*r*r);
    printf("The circumference of the circle is:%.2f\n",2*p*r);


    return 0;
}