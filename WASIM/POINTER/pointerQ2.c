//write a program  to input a number and display its memory address using a pointer.
#include<stdio.h>
int main(){
    int a;
    int*b;
    b=&a;

    printf("Enter a number: ");
    scanf("%d",&a);

    printf("%p",&a);





}
