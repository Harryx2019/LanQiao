#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTEX_NUM 20001
#define inf 9999

//------ 图的邻接表存储表示 -----
typedef struct ArcNode
{
    int adjvex;//该弧所指向的顶点的位置
    int weight;//该弧的权值
    struct ArcNode *nextarc;//指向下一条弧的指针
}ArcNode;
typedef struct VNode
{
    int data;//顶点信息
    ArcNode *firstarc;//指向第一条依附该顶点的弧的指针
}VNode,AdjList[MAX_VERTEX_NUM];
typedef struct ALGraph
{
    AdjList vertices;
    int vexnum,arcnum;//图的当前顶点数和弧数
}ALGraph;

int dis[MAX_VERTEX_NUM];
int vis[MAX_VERTEX_NUM];

int update(int u,int v,int l)
{
    if(dis[v]>dis[u]+l)
    {
        dis[v]=dis[u]+l;
        return 1;
    }
    return 0;
}
void SPFA(ALGraph G,int s)
{
    int queue[MAX_VERTEX_NUM]={0},top=0,base=0;
    ArcNode *node=(ArcNode*)malloc(sizeof(ArcNode));
    dis[s]=0;
    queue[top++]=s;
    vis[s]=1;
    while(top!=base)
    {
        int u,v;
        u=queue[base];
        base++;
        vis[u]=0;
        node=G.vertices[u].firstarc;
        while(node!=NULL)
        {
            v=node->adjvex;
            if(update(u,v,node->weight)==1 && vis[v]==0)
            {
                queue[top++]=v;
                vis[v]=1;
            }
            node=node->nextarc;
        }
    }
}

int main()
{
    int n,m;
    int u,v,l;
    int i;
    ALGraph DG;
    scanf("%d %d",&n,&m);
    DG.vexnum=n;
    DG.arcnum=m;
    for(i=0;i<=n;i++)//初始化邻接表表头
    {
        DG.vertices[i].data=i;
        DG.vertices[i].firstarc=NULL;
        dis[i]=inf;
        vis[i]=0;
    }
    for(i=1;i<=m;i++)
    {
        ArcNode *node=(ArcNode*)malloc(sizeof(ArcNode));
        scanf("%d %d %d",&u,&v,&l);
        node->adjvex=v;
        node->weight=l;
        node->nextarc=DG.vertices[u].firstarc;
        DG.vertices[u].firstarc=node;
    }
    SPFA(DG,1);
    for(i=2;i<=n;i++)
        printf("%d\n",dis[i]);
    return 0;
}
