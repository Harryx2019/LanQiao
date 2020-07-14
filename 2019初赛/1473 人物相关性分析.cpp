#include <stdio.h>
#include <string.h>

int main()
{
    int k;
    scanf("%d",&k);
    getchar();

    const char *a="Alice",*b="Bob";
    char str[1000000];
    gets(str);

    int length=strlen(str);
    int num=0,i,j,t,flag;
    char word[20];
    for(i=0; i<length; i++)
    {
        if(str[i]=='A' || str[i]=='B')
        {
            j=0;
            while(str[i]!=' ' && str[i]!='.')
                word[j++]=str[i++];
            word[j]='\0';

            flag=0;
            if(strcmp(word,a)==0)
                flag=1;
            else if(strcmp(word,b)==0)
                flag=2;

            if(flag==1)
            {
                for(t=i; t<length; t++)
                {
                    if(t-i>k)
                        break;
                    if(str[t]=='B')
                    {
                        j=0;
                        while(str[t]!=' ' && str[t]!='.')
                            word[j++]=str[t++];
                        word[j]='\0';

                        if(strcmp(word,b)==0)
                            num++;
                        break;
                    }
                }
            }
            else if(flag==2)
            {
                for(t=i; t<length; t++)
                {
                    if(t-i>k)
                        break;
                    if(str[t]=='A')
                    {
                        j=0;
                        while(str[t]!=' ' && str[t]!='.')
                            word[j++]=str[t++];
                        word[j]='\0';

                        if(strcmp(word,a)==0)
                            num++;
                        break;
                    }
                }
            }
        }
    }
    printf("%d\n",num);

    return 0;
}
