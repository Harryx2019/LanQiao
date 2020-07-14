#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a,*b,i,j,k,n,m;
    scanf("%d %d",&n,&m);
    a=(int*)malloc(sizeof(int)*(n*m));
    b=(int*)malloc(sizeof(int)*(n*m));
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            scanf("%d",&a[(i-1)*m+(j-1)]);
        }
    }
    k=0;
    for(i=1; i<=m; i++)
    {
        for(j=n; j>0; j--)
        {
            b[k++]=a[(j-1)*m+(i-1)];
        }
    }
    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            printf("%d ",b[(i-1)*n+(j-1)]);
        }
        printf("\n");
    }
    return 0;
}
