#include <stdio.h>
#include <string.h>
int main(){
    char name[100][100];
    int score[100];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s %d",name[i],&score[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            // strcmp返回>0表示name[j]字典序大于name[j+1]，说明name[j+1]的排名更靠前
            if(score[j]<score[j+1]||(score[j]==score[j+1]&&strcmp(name[j],name[j+1])>0))
            //冒泡排序
            {
                int t=score[j];
                score[j]=score[j+1];
                score[j+1]=t;

                char tn[100];
                strcpy(tn,name[j]);
                strcpy(name[j],name[j+1]);
                strcpy(name[j+1],tn);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%s %d\n",name[i],score[i]);
    }
    return 0;
}
