#include<stdio.h>
int main(){
    int a,b,c;
     //taking input from user
    printf("enter your number: ");
    scanf("%d",&a);

    b=1;
//print table
    while(b<=10){
            c=a*b;
        printf("\n%d",c);
    b=b+1;
    }




}

