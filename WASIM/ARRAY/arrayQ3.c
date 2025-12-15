//Write a program in C to print the even number of an Array.
#include<stdio.h>
int main(){
    int a[5],i;

    printf("enter a number: ");
    for(i=0;i<5;i=i+1){
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i=i+1){
            if(a[i]%2==0){
                 printf("%d",a[i]);
            }

    }




}

