#include<bits/stdc++.h>
using namespace std;
class edge{
    public:
    int u;
    int v;
    int w;
    edge (int u,int v,int w)
    {
        this->u=u;
        this->v=v;
        this->w=w;
    }
};
int main()
{
    int n,e;
    cin>>n>>e;
    vector<edge>v;
    while (e--)
    {
        int a,b,w;
        cin>>a>>b>>w;
        edge ed(a,b,w);
        // cout<<ed.u<<" "<<ed.v<<" "<<ed.w<<endl;
        v.push_back(ed);
    }
    int dis[n+1];
    for (int i = 0; i <=n; i++)
    {
        dis[i]=INT_MAX;
        /* code */
    }
    dis[1]=0;
    for (int i = 1; i <n-1; i++)
    {
        for(int j=0;j<v.size();j++)
        {
            edge ed=v[j];
            int a=ed.u;
            int b=ed.v;
            int w=ed.w;
            if(dis[a]+w<dis[b])
            {
                dis[b]=dis[a]+w;
            }
        }
    }
    bool cycle=false;

    for(int j=0;j<v.size();j++)
        {
            edge ed=v[j];
            int a=ed.u;
            int b=ed.v;
            int w=ed.w;
            if(dis[a]+w<dis[b])
            {
                cycle=true;
                break;
                dis[b]=dis[a]+w;
            }
        }
        if(cycle)
        {
            cout<<"cycle exist";
        }
        else{
                for (int  i = 1; i <=n; i++)
    {
        cout<<"Node"<<i<<": "<<dis[i]<<endl;
    }
    
        }
    
    
    return 0;
}