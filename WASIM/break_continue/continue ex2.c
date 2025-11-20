//printing number betwen 1to30 but skip the multiple of 3.


#include<stdio.h>
int main(){
    //taking variable
    int n;
    //using  for loop
    for(n=1;n<=30;n=n+1){
        if(n%3==0){
            continue;
        }
        printf("\n%d",n);
    }
    printf("\nend of program.");



}
