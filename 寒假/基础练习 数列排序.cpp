#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,n,*s,p;
    scanf("%d",&n);
    s=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
        scanf("%d",&s[i]);
    for(i=0;i<n-1;i++)
    {
        k=i;
        for(j=i;j<n;j++)
        {
            if(s[j]<s[k])
                k=j;
        }
        if(k!=i)
        {
            p=s[k];
            s[k]=s[i];
            s[i]=p;
        }
    }
    printf("%d",s[0]);
    for(i=1;i<n;i++)
        printf(" %d",s[i]);
    printf("\n");
    return 0;
}
