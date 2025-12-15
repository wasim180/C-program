//Write a program in C to copy the elements of one array into another array.
#include<stdio.h>
int main(){
    int a[4],b[4],i;

    printf("Enetr a number: ");
    for(i=0;i<4;i=i+1){
        scanf("%d",&a[i]);
    }
    for(i=0;i<4;i=i+1){
        b[i]=a[i];
    }
    for(i=0;i<4;i=i+1){
        printf("b=%d",b[i]);
    }



}
