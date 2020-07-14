#include <stdio.h>
#include <stdlib.h>

int* Yang(int *s,int n);

int main()
{
    int n,i,*s=(int*)malloc(sizeof(int));
    s[0]=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        s=Yang(s,i);
    return 0;
}

int* Yang(int *s,int n)
{
    int i,*ss=(int*)malloc(sizeof(int)*(n+1));

    printf("%d",s[0]);
    for(i=1;i<n;i++)
        printf(" %d",s[i]);
    printf("\n");

    ss[0]=ss[n]=1;
    for(i=1;i<n;i++)
    {
        ss[i]=s[i]+s[i-1];
    }
    return ss;
}
