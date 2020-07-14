#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a,n,i,j,k,t,min;
    scanf("%d",&n);
    a=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        k=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[k])
                k=j;
        }
        if(k!=i)
        {
            t=a[i];
            a[i]=a[k];
            a[k]=t;
        }
    }
    min=a[1]-a[0];
    for(i=1;i<n-1;i++)
    {
        if(a[i+1]-a[i]<min)
            min=a[i+1]-a[i];
    }
    printf("%d\n",(a[n-1]-a[0])/min+1);
    return 0;
}
