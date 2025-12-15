//Wap in c to add all the elemnts of an aray size of 4.
#include<stdio.h>
int main(){
    int a[4],i,sum=0;
    printf("Enter fours numbers: ");
    for(i=0;i<4;i=i+1){
        scanf("%d",&a[i]);
    }
    for(i=0;i<4;i=i+1){
        sum=sum+a[i];
    }
    printf("%d",sum);



}
