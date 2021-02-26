#include <stdio.h>
int main(void)
{
    int a,i,n=0;
    
    for(i=0;i<=10;i++)
    {
        scanf("%d",&a);
        if(a%3==0)
        {
           n++;
        }
    
    }

    printf("%d\n",n);
   
}
