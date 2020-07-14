#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,i,*s;
    scanf("%d",&n);
    s=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
        scanf("%d",&s[i]);
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
        if(s[i]==a)
        {
            printf("%d\n",i+1);
            break;
        }
    }
    if(i==n)
       printf("-1\n");

    return 0;
}
