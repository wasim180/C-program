#include<stdio.h>
int main(){
    //declaring variables of an array size of 5.
    int a[5],b[5],c[5],i;

    printf("Enter 1st five number: ");

    for(i=0;i<=4;i=i+1){
        scanf("%d",&a[i]);
    }
    printf("enter 2nd five number");
    for(i=0;i<=4;i=i+1){
        scanf("%d",&b[i]);
    }
    for(i=0;i<=4;i=i+1){
        c[i]=a[i]+b[i];
    }
    for(i=0;i<=4;i=i+1){
        printf("sum=%d",c[i]);
    }




}
