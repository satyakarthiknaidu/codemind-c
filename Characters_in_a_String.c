#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    scanf("%[^
]s",str);
    int a;
    a=strlen(str);
    printf("%d",a);
}