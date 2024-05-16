#include <stdio.h>
int main()
{
    int rem,temp,num,rev=0;

    printf("enter the number :");
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10; 
    }
    if (temp==rev) 
    {
        printf("number is palindrome");
    }
    else
    {
        printf("number is not palindrome");
    }
    return 0;
    
}
