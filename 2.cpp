#include <stdio.h>
int main(void)
{
    int i,n,a=0;
    scanf("%d",&i);
    
    for(n=1;n<=i;n++)
    {
        if(i%n==0)
        {
           a++;
        }
    
    }
    
    printf("%d\n",a);

    return 0;
}
