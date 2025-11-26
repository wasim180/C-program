/* Take an integer variable and a pointer pointing to it. Now increment the value of variable using pointer.
   Print the value of integer before and after update.*/
#include<stdio.h>
int main()
{
    int a;
    int*p;
    p=&a;

    printf("Enter a number: ");
    scanf("%d",&a);

    printf(" before increment=%d\n",*p);
    *p=*p+1;

    printf(" after increment=%d",*p);

}
