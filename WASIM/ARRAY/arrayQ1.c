//Write a program in C to read n number of values in an array and display them in reverse order.
#include<stdio.h>
int main(){
    int a[4],i;

    printf("Enter a number: ");

    for(i=0;i<4;i=i+1){
        scanf("%d",&a[i]);
    }
    for(i=3;i>=0;i=i-1){
        printf("%d",a[i]);
    }




}
