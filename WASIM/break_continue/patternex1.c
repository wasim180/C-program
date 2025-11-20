
/* print this pattern
                *
              *   *
            *   *   *
          *   *   *   *
        *   *   *   *   *

*/

#include<stdio.h>
int main(){
             int i,j,k,l;


             // Using  outer For loop
             for(i=0; i<=4; i=i+1){
                    //using inner loop
                for(j=0; j<4-i; j=j+1){
                    printf(" ");
                }
                for(k=0; k<=i; k=k+1){
                    printf( " ""*");
                }
                for(l=0; l<4-i; l=l+1){
                    printf(" ");
                }
                    printf("\n");
             }
}
