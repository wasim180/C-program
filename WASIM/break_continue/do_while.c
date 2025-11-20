#include<stdio.h>
int main()
{
    //declare  varibale
    int n, pos = 0, neg = 0;

    //using for loop
    for( ; ;)
    {
        //taking input
        printf("enter a number: ");
        scanf("%d",&n);

        if(n==0)
        {
            break;
        }
        else if(n>0)
        {
            pos=pos+1;
        }
        else if(n<0)
        {
            neg=neg+1;
        }
    }

    printf(" total positive number %d \n ",pos);
    printf(" total negitive number %d",neg);

}
