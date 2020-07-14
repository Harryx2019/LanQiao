#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,*s;
    int max,min,sum;
    int i,j;
    scanf("%d",&n);
    s=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",&s[i]);
    max=min=sum=s[0];
    for(i=1;i<n;i++)
    {
        if(max<s[i])
            max=s[i];
        if(min>s[i])
            min=s[i];
        sum+=s[i];
    }
    printf("%d\n",max);
    printf("%d\n",min);
    printf("%d\n",sum);
    return 0;
}
