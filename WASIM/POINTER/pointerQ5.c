//Create a pointer to a character and increment it. Observe output. Explain why the address changes differently than for an integer.
#include<stdio.h>
int main(){
    char x;
    char*y;

    y=&x;

    printf("Enter a charcter: ");
    scanf("%c",&x);

    printf(" before increment=%c\n",*y);
    *y=*y+1;

    printf(" after increment=%c",*y);

}
