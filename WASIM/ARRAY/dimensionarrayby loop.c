#include<stdio.h>
int main(){
    int a[3],i;
    int*p;
    p=a;


    printf("enter three numbers: ");
    for(i=0;i<3;i=i+1){
        scanf("%d",&a[i]);
    }
     for(i=0;i<3;i=i+1){
        printf("%d",*p+i);
    }



}
