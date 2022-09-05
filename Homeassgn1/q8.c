#include <stdio.h>

int main(){
    int num;
    printf("Enter the number to check if palindrome or not ");
    scanf("%d",&num);

    int temp=num,a,sum=0;
    while(num>0)
    {
        a=num%10;
        sum=sum*10+a;
        num=num/10;

    }
    if(sum==temp)
    printf("The number is palindrome ");
    else   
    printf("The number is not palindrome ");
    return 0;
}