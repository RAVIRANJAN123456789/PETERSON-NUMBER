#include<stdio.h>
int peterson(int n)
{
    int rem=0,s=0;int m=n;
    while(n>0)
    {
        rem=n%10;
        s=s+factorial(rem);
        n=n/10;
    }
    if(s==m)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int factorial(int n)
{
    if(n==0)
        return 1;
    else if(n==1)
        return 1;
    else if(n>1)
        return n*factorial(n-1);

}
int main()
{
    int n;
    printf("enter the number to be checked as peterson \n");
    scanf("%d",&n);
    int output;
    output=peterson(n);
    if(output==1)
    {
        printf("number %d is a peterson number \n",n);
    }
    else
    {
        printf("number %d is not a peterson number \n",n);
    }
    return 0;
}
