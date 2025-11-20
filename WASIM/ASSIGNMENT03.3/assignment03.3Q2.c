#include<stdio.h>
int main(){
    char alphabet;

    printf("enter  a single alphabet: ");
    scanf("%c",&alphabet);
    alphabet= tolower(alphabet);

    if(alphabet=='a' || alphabet=='e' || alphabet=='i' || alphabet=='o' || alphabet=='u'){
        printf("the alphabet is vowel.");
    }
    else{
        printf("this alphabet is consonant.");
    }

}
