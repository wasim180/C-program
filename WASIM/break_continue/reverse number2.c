//Q.WACP to reverse  any number entered by user .

#include<stdio.h>
int main(){
    //declare variable.
    int n,t;
    int r=0;

    //taking input
    printf("Enter a number: ");
    scanf("%d",&n);

     //using while loop.
    while(n!=0){
         t=n%10;
         r=r*10+t;
         n=n/10;
    }
   //printing reverse number.
    printf("%d",r);
}
