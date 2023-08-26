#include <bits/stdc++.h>
#define pi pair<int, int>
using namespace std;
int n,m;
const int N = 1005;
bool vis[N][N];
char a[N][N];
vector<pi>path ={{-1,0},{1,0},{0,-1},{0,1}};
bool isValid(int cI,int cJ)
{
    if (cI >=0 && cI<n && cJ>=0 && cJ<m && a[cI][cJ]=='.')
    return true;
    else
    return false;
}
int dfs(int si,int sj)
{
    vis[si][sj]=true;
    int area=1;
    for (int i = 0; i<4; i++)
    {
        pi p= path[i];
        int ci=si+p.first;
        int cj=sj+p.second;
        if (isValid(ci,cj) && !vis[ci][cj])
        {
            
            area += dfs(ci,cj);
        }
    }
    return area;
}
int main()
{
    cin>>n>>m;
    for (int i = 0; i <n; i++)
    {


        for (int j = 0; j <m; j++)
        {

            cin>>a[i][j];
        }
    }
    int mnArea=INT_MAX;
    int flag=false;
    for (int i = 1; i < n; i++)
    {

        for (int j = 1; j <m; j++)
        {

            if (!vis[i][j] && a[i][j]=='.')
            {   
                flag=true;
                int area=dfs(i,j);
                mnArea=min(mnArea,area);
            }

        }
    }
    if (!flag)
    {

        cout<<-1<<endl;
      
    } 
    else
    {
        cout<<mnArea<<endl;
    }


    
    return 0;
}

