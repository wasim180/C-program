//WAP in c array of size 10 multiple of 7 then print it.
#include<stdio.h>
int main(){
     int a[10],i;

     printf("enter ten numbers");
     for(i=0;i<10;i=i+1){
        scanf("%d",&a[i]);
     }
      for(i=0;i<10;i=i+1){
            if(a[i]%7==0){
              printf("%d",a[i]);
            }
            else{
                printf("not multiple of 7 ");
            }

     }





}
