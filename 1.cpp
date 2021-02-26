#include <stdio.h>
int main(void)
{
    int i,a,b,c;
    scanf("%d",&i);
    
    a=i/50;
    b=(i%50)/5;
    c=(i%50)%5/1;
    
    printf("%d=50*%d+5*%d+1*%d\n",i,a,b,c);
    
    return 0;
}
