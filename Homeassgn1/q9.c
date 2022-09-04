#include <stdio.h>

int main(){
    int num;
    printf("Enter the number to check if Amstrong or not ");
    scanf("%d",&num);

    int temp=num,a,sum=0;
    while(num>0)
    {
        a=num%10;
        sum=sum+(a*a*a);
        num=num/10;

    }
    if(sum==temp)
    printf("The number is amstrong ");
    else   
    printf("The number is not amstrong ");
    return 0;
}