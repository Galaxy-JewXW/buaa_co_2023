#include<bits/stdc++.h>
using namespace std;
const int N = 1005,M = 1005;
int  n,m;
int mp[N][M];
int way[M+N][3],cnt;
int ix,iy,ox,oy;
struct pos{
    int x,y,stp;
};
queue<pos>q;
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
bool vis[N][M],flag;
inline void print(int stp)
{
    for(int i=1;i<stp;i++)    
        printf("%d,%d\n",way[i][1],way[i][2]);
    puts("");
}

inline void bfs()
{
    q.push((pos){ix,iy,2});
    way[1][1]=ix,way[1][2]=iy;
    while(!q.empty())
    {
        pos now=q.front();
        int stp=now.stp;
        q.pop();
        if(now.x==ox&&now.y==oy) 
        {
            way[stp][1]=now.x;
            way[stp][2]=now.y;
            print(stp);
            flag=1;
            return;
        }
        for(int i=0;i<4;i++)    
        {
            int nx=now.x+dx[i],ny=now.y+dy[i];
//            if(flag) return;
            if(nx<=n&&ny<=m&&nx>=1&&ny>=1&&mp[nx][ny]==0&&!vis[nx][ny])
            {
                vis[nx][ny]=1;
                way[stp][1]=nx,way[stp][2]=ny;
                q.push((pos){nx,ny,stp+1});
            }
        }
    }
}

void dfs(int x,int y,int stp)
{
    if(flag) return;
    if(x==ox&&y==oy) 
    {
        way[stp][1]=x;
        way[stp][2]=y;
        print(stp);
        flag=1;
        return;
    }
    for(int i=0;i<4;i++)    
    {
        int nx=x+dx[i],ny=y+dy[i];
        if(flag) return;
        if(nx<=n&&ny<=m&&nx>=1&&ny>=1&&mp[nx][ny]==0&&!vis[nx][ny])
        {
            vis[nx][ny]=1;
            way[stp][1]=nx,way[stp][2]=ny;
            dfs(nx,ny,stp+1);
            vis[nx][ny]=0;
        }
    }
}
int main()
{
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            scanf("%d",&mp[i][j]);
    scanf("%d%d%d%d",&ix,&iy,&ox,&oy);
    way[1][1]=ix,way[1][2]=iy;
    dfs(ix,iy,2);
//    bfs();
    if(!flag) printf("no way.");
    return 0;
}