#include <stdio.h>
#include <math.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    if (m>n){
        int temp=m;
        m=n;
        n=temp;
    } 
    int count=0;
    for(int i=m;i<=n;i++)
    {
        if(i==1) continue;
        if(i==2) count++;
        else
        {
            for(int j=2;j<i;j++)
            {
                if(i%j==0) break;
                if(j>sqrt(i)){
                    count++;
                    break;
                }
            }
        
        }
    }
    printf("%d",count);
    return 0;
}
