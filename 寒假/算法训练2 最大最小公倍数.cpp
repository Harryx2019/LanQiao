#include <stdio.h>

int main()
{
    long long n,ans;
    scanf("%I64d", &n);
    if(n%2)
        ans=n*(n-1)*(n-2);
    else{
        if(n%3)
            ans=n*(n-1)*(n-3);
        else
            ans=(n-1)*(n-2)*(n-3);
    }
    printf("%I64d\n", ans);
    return 0;
}
