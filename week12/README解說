```C
#include <stdio.h>
int a[100];
int main()
{
    int T;//Step01: Input 有幾筆
    scanf("%d", &T);
    for(int t=0; t<T; t++){
        int N;
        scanf("%d", &N);
        for(int i=0; i<N; i++){//Step02: Input到陣列 a[i]
            scanf("%d", &a[i]);
        }
        
        int ans=0;
        
        for(int k=0; k<N-1; k++){
            for(int i=0; i<N-1; i++){//泡泡排序 還不對
                if( a[i] > a[i+1] ){
                    int temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;
                    ans++;//又做了一次交換swap
                }
            }
        }
        //Step03: Output
        printf("Optimal train swapping takes %d swaps.\n", ans);
    }
}
``` 
       
 
         
 
  
 
  
 
   


 
