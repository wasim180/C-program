//multiplying two arrays.
#include<stdio.h>
int main(){
    int a[10],b[10],c[10],i;
    printf("Enter ten numbers: ");
    for(i=0;i<10;i=i+1){
        scanf("%d",&a[i]);
    }
    printf("Enter 2nd number: ");
     for(i=0;i<10;i=i+1){
        scanf("%d",&b[i]);
    }
    for(i=0;i<10;i=i+1){
        c[i]=a[i]*b[i];
    }
     for(i=0;i<10;i=i+1){
        printf(" after multiply=%d\n",c[i]);
    }

}
