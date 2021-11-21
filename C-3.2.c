//求整数序列中出现次数最多的数
#include<stdio.h>
int main()
{
    int i,n,str[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&str[i]);
    int j,num,count,max=-1,maxnum;
    for(i=0;i<n;i++)
    {
        num=str[i];
        count=0;
        for(j=0;j<n;j++)
        {
            if(str[j]==num)
            count++;
        }
        if(count>max)
        {
            max=count;
            maxnum=str[i];
        }
    }
    printf("%d %d",maxnum,max);
    return 0;
}