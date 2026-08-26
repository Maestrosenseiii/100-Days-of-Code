#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("The numbers are in sequence:%d,%d\n",a,b);
    printf("after swapping\n");
    printf("%d\n",a);
    printf("%d\n",b);
    
   
    return 0;
    
}