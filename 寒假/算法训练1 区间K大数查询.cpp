#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,*s,*ss,m,l,r,k,i,j=0,p,q,t,o;
    scanf("%d",&n);
    s=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
        scanf("%d",&s[i]);
    scanf("%d",&m);
    while(m!=0)
    {
        scanf("%d %d %d",&l,&r,&k);
        j=0;
        for(i=0;i<n;i++)
        {
            if(i>=l-1 && i<=r-1)
                j++;
        }
        ss=(int*)malloc(sizeof(int)*j);
        p=0;
        for(i=0;i<n;i++)
        {
            if(i>=l-1 && i<=r-1)
                ss[p++]=s[i];
        }
        for(i=0;i<j-1;i++)
        {
            q=i;
            for(t=i+1;t<j;t++)
            {
                if(ss[t]>ss[q])
                    q=t;
            }
            if(q!=i)
            {
                o=ss[q];
                ss[q]=ss[i];
                ss[i]=o;
            }
        }
        printf("%d\n",ss[k-1]);
        m--;
    }
    return 0;
}
