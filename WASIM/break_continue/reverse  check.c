//WACP to check the entered number and the output is same number.

#include<stdio.h>
int main(){
    //declare variable.
    int n,t,u;
    int r=0;

    //taking input
    printf("Enter a number: ");
    scanf("%d",&n);
    u=n;

    //using while loop
    while(n!=0){
        t=n%10;
        r=r*10+t;
        n=n/10;
   }
    printf("%d",r);

    if(u==r){
       printf("\n yes,both are same number.");
    }
    else{
        printf("\n no,both are not same number.");
    }


}
