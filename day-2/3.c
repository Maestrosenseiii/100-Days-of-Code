// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.


#include <stdio.h>

int main(){
   int l,b;
    printf("Enter the length of the rectangle:\n");
    scanf("%d", &l);
    printf("Enter the breadth of the rectangle:\n");
    scanf("%d", &b);
    printf("Area of the rectangle is: %d\n", l*b);
    printf("Perimeter of the rectangle is: %d\n", 2*(l+b));
    return 0;
}