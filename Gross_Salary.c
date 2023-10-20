#include<stdio.h>
int main()
{
    int bs,DA,HRA;
    scanf("%d",&bs);
    float gs;
    if(bs<=10000)
    {
        DA=(bs/100)*80;
        HRA=(bs/100)*20;
        gs=bs + DA + HRA;
        printf("%0.2f",gs);
    }
    else  if(bs<=20000)
    {
        DA=(bs/100)*90;
        HRA=(bs/100)*25;
        gs=bs + DA + HRA;
        printf("%0.2f",gs);
    }
    else
    {
     DA=(bs/100)*95;
     HRA=(bs/100)*30;
     gs=bs + DA +HRA;
     printf("%0.2f",gs);
    }
}
    
    
    
    
    