//printing odd number between 11 to 16.

#include<stdio.h>
int main(){
    int n;
//using for loop.
    for(n=11;n<=16;n=n+1){
        if(n%2==0){
                //skip the iteration
            continue;
        }
        printf("%d",n);
    }
    printf("end of program.");

}
