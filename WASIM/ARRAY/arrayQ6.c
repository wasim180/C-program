/* 1.take array of size 10
   2. take input from user
   3.print a[0],a[5],&a[0],&a[5],&a*/
#include<stdio.h>
int main(){
    int a[10],i;
    printf("Enter ten numbers: ");
    for(i=0;i<10;i=i+1){
        scanf("%d",&a[i]);
    }
    printf("a[0]=%d\n",a[0]);
    printf("a[5]=%d\n",a[5]);
    printf("address of a[0]=%p\n",&a[0]);
    printf("address of a[5]=%p\n",&a[5]);
    printf("address of a=%p",&a);

}
