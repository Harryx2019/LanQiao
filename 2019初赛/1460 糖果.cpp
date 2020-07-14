#include <stdio.h>
#include <stdlib.h>

int n,m,k;
int num,min;
int cidy[101][21],taste[21],bag[101];

void Backtrack(int t);

int main()
{
    while(scanf("%d %d %d",&n,&m,&k)!=EOF)
    {
        int i,j;
        min=201;
        for(i=1; i<=n; i++)
            for(j=1; j<=k; j++)
                scanf("%d",&cidy[i][j]);

        for(i=1; i<=m; i++)
            taste[i]=0;
        for(i=1; i<=n; i++)
            bag[i]=0;

        Backtrack(1);
        if(min==201)
            printf("-1\n");
        else
            printf("%d\n",min);
    }
}

void Backtrack(int t)
{
    int i;
    int flag;
    if(t>n)
    {
        flag=1;
        for(i=1; i<=m; i++)
        {
            if(taste[i]==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            num=0;
            for(i=1; i<=n; i++)
            {
                if(bag[i]==1)
                    num++;
            }
            if(num<min)
                min=num;
        }
    }
    else
    {
        //买第t包糖果
        bag[t]=1;
        for(i=1; i<=k; i++)
            taste[cidy[t][i]]++;
        flag=1;
        for(i=1; i<=m; i++)
        {
            if(taste[i]==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            num=0;
            for(i=1; i<=n; i++)
            {
                if(bag[i]==1)
                    num++;
            }
            if(num<min)
                min=num;
        }
        else
            Backtrack(t+1);

        //不买第t包糖果
        bag[t]=0;
        for(i=1; i<=k; i++)
            taste[cidy[t][i]]--;
        Backtrack(t+1);
    }
}
