#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,*a;
    int i,j,k,t,sum;
    scanf("%d %d",&n,&m);
    a=(int*)malloc(sizeof(int)*(n+m+1));
    for(i=0;i<n+m+1;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n+m;i++)
    {
        k=i;
        for(j=i+1;j<n+m+1;j++)
        {
            if(a[j]>a[k])
                k=j;
        }
        if(k!=i)
        {
            t=a[i];
            a[i]=a[k];
            a[k]=t;
        }
    }
    sum=0;
    for(i=0;i<n+1;i++)
        sum+=a[i];
    for(i=n+1;i<n+m+1;i++)
        sum-=a[i];
    printf("%d\n",sum);
    return 0;
}
