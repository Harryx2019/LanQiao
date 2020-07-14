#include <stdio.h>
#include <stdlib.h>

int maze[31][51],fx[4]= {1,0,0,-1},fy[4]= {0,-1,1,0},dir[4]={'D','L','R','U'};

struct
{
    int x,y,pre;
}sq[1000];
int qh,qe,i,j,k;

void search();
void Out();
int check(int i,int j);

int main()
{
    FILE *fp;
    int i,j;
    if((fp=fopen("maze.txt","r"))==NULL)
    {
        printf("文件打开失败！\n");
        exit(0);
    }
    else
    {
        char ch;
        for(i=1; i<=30; i++)
        {
            for(j=1; j<=50; j++)
            {
                fscanf(fp,"%c",&ch);
                if(ch=='\n')
                    j--;
                else
                    maze[i][j]=ch-'0';
            }
        }
    }
    search();
}

void search()
{
    qh=0;
    qe=1;
    maze[1][1]=-1;
    sq[1].pre=0;
    sq[1].x=1;
    sq[1].y=1;
    while(qh!=qe)
    {
        qh=qh+1;
        for(k=0;k<4;k++)
        {
            i=sq[qh].x+fx[k];
            j=sq[qh].y+fy[k];
            if(check(i,j)==1)
            {
                qe=qe+1;
                sq[qe].x=i;
                sq[qe].y=j;
                sq[qe].pre=qh;
                maze[i][j]=-1;
                if(sq[qe].x==30 && sq[qe].y==50)
                {
                    Out();
                    return;
                }
            }
        }
    }
    printf("No solution.");
}

void Out()
{
    int i=0;
    char *route=(char*)malloc(sizeof(char)*1000);
    int x=sq[qe].x;
    int y=sq[qe].y;
    int newx,newy;
    while(sq[qe].pre!=0)
    {
        qe=sq[qe].pre;
        for(k=0;k<4;k++)
        {
            newx=sq[qe].x+fx[k];
            newy=sq[qe].y+fy[k];
            if(newx==x && newy==y)
            {
                route[i++]=dir[k];
                x=sq[qe].x;
                y=sq[qe].y;
                break;
            }
        }
    }
    for(i=i-1;i>=0;i--)
        printf("%c",route[i]);
    printf("\n");
}

int check(int i,int j)
{
    int flag=1;
    if(i<1 || i>30 || j<1 || j>50)
        flag=0;
    else if(maze[i][j]==-1 || maze[i][j]==1)
        flag=0;
    return(flag);
}
