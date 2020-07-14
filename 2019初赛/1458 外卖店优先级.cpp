#include <stdio.h>
#include <stdlib.h>

typedef struct Shop
{
    int priority;
    int is;
    int flag;
}Shop;

typedef struct Event
{
    int ts;
    int id;
}Event;

int main()
{
    int n,m,t;
    int i,j,num;
    scanf("%d %d %d",&n,&m,&t);
    Shop *s=(Shop*)malloc(sizeof(Shop)*n);
    for(i=0;i<n;i++)
    {
        s[i].priority=0;
        s[i].is=0;
        s[i].flag=0;
    }
    Event *e=(Event*)malloc(sizeof(Event)*m);
    for(i=0;i<m;i++)
        scanf("%d %d",&e[i].ts,&e[i].id);
    for(i=1;i<=t;i++)
    {
        for(j=0;j<n;j++)
            s[j].flag=0;
        for(j=0;j<m;j++)
        {
            if(e[j].ts==i)
            {
                s[e[j].id-1].priority+=2;
                s[e[j].id-1].flag=1;
            }
        }
        for(j=0;j<n;j++)
        {
            if(s[j].flag!=1)
                s[j].priority--;

            if(s[j].priority<0)
                s[j].priority=0;

            if(s[j].priority<=3)
                s[j].is=0;
            else if(s[j].priority>5)
                s[j].is=1;
        }
    }
    num=0;
    for(i=0;i<n;i++)
    {
        if(s[i].is==1)
            num++;
    }
    printf("%d\n",num);
    return 0;
}
