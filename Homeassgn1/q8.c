#include <stdio.h>

int main(){
    int num;
    printf("Enter the number to check if palingdrome or not ");
    scanf("%d",&num);

    int temp=num,a,sum=0;
    while(num>0)
    {
        a=num%10;
        sum=sum*10+a;
        num=num/10;

    }
    if(sum==temp)
    printf("The number is palingdrome ");
    else   
    printf("The number is not palingdrome ");
    return 0;
}