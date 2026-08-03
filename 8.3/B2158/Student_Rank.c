#include <stdio.h>
int main(){
    int num[100];
    float score[100];
    int rank[100];
    int n;
    int r;
    scanf("%d %d",&n,&r);
    for(int i=0;i<n;i++)
    {
        scanf("%d %f",&num[i],&score[i]);
    }
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(score[j]>score[i])
            {
                count++;
            }
        }
        rank[count]=i;
    }
    printf("%d %g",num[rank[r-1]],score[rank[r-1]]);
    return 0;
}