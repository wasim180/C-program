#include<stdio.h>
int main(){
    int a,b,c;

    printf("Enter your number:  ");
    scanf("%d",&a);

    //printing only even number from table.
    b=1;

    while(b<=10){
        c=a*b;
        if(c%2==0){
            printf("\n%d",c);
        }
        b=b+1;
    }





}
