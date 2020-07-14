#include<stdio.h>

void change(int n);

int main()
{
	int n;
	scanf("%d",&n);
	if(n==0)
        printf("0\n");
	change(n);
    return 0;
}

void change(int n)
{
    int m;
    if(n!=0)
    {
        change(n/16);
        m=n%16;
        if(m<10)
           printf("%d",m);
 	    else if(m>=10)
 	       printf("%c",'A'+m-10);
    }
}
