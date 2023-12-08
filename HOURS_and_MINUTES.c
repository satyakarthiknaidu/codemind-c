#include<stdio.h>
int hours(int);
int minutes(int);
int main()
{
    int n;
    scanf("%d",&n);
    int reso=hours(n);
    int resu=minutes(n);
    printf("%d Hour(s) %d Minute(s)",reso,resu);
}
int hours(int n)
{
    return n/60;
}
int minutes(int n)
{
    return n%60;
}