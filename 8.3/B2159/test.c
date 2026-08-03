#include <stdio.h>
#include <string.h>
int main(){
    char name[100][100];
    int score[100];
    int rank[100];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s %d",name[i],&score[i]);
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
            if(score[j]==score[i])
            {
                if(strcmp(name[j],name[i])<0)
                // strcmp返回<0表示name[j]字典序小于name[j+1]，说明name[j]的排名更靠前
                {
                    count++;
                }
            }
        }
        rank[count]=i;
    }
    for(int i=0;i<n;i++)
    {
        printf("%s %d\n",name[rank[i]],score[rank[i]]);
    }
    return 0;
}