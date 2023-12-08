#include<stdio.h>
int Nat(int);
int main()
{
    int n;
    scanf("%d",&n);
   int res=Nat(n);
    printf("%d",res);
}
int Nat(int n)
{   
    int Nat;
    Nat=(n*(n+1))/2;
    return Nat;
}