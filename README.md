# 2020cce

## 第一題
```C
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
```

## 第二題
```C
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
```

## 第三題
```C
#include <stdio.h>
int main()
{
    int n,i,ans=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&n);
        if(n%3==0)
           ans++;
    }
    printf("%d\n",ans);
}
```

## 第四題
```C
#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    
    if(n>=90)
    {
       printf("A\n");
    }
    if(n>=80 && n<90)
    {
       printf("B\n");
    }
    if(n>=60 && n<80)
    {
       printf("C\n");
    }
    else if(n<60)
    
       printf("F\n");
    
    
    return 0;
}
```

## 第五題
```C
#include <stdio.h>
int main()
{
    int a,b,i,n=1;
    scanf("%d %d",&a,&b);
    
    for(i=1;i<=b;i++)
    {
        if(a%i==0 && b%i==0)
           n=i;
        
    }
    printf("%d %d\n",a/n,b/n);
}
```
