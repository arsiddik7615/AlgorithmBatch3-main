#include<bits/stdc++.h>
using namespace std;
const long long int INF=1e18;
class edge{
    public:
    long long int u;
    long long int v;
    long long int w;
    edge (long long int u,long long int v,long long int w)
    {
        this->u=u;
        this->v=v;
        this->w=w;
    }
};
int main()
{
    long long int n,e;
    cin>>n>>e;
    vector<edge>v;
    while (e--)
    {
        long long int a,b;
        long long int w;
        cin>>a>>b>>w;
        edge ed(a,b,w);
        // cout<<ed.u<<" "<<ed.v<<" "<<ed.w<<endl;
        v.push_back(ed);
    }
    long long int src;
    cin>>src;
    long long int t;
    cin>>t;
    while (t--)
    {
        long long int dst;
        cin>>dst;
        long long int dis[n+1];
        for (long long int i = 0; i <=n; i++)
        {
            dis[i]=INF;
            
        }
        dis[src]=0;
        for (long long int i = 1; i <n-1; i++)
        {
            for(long long int j=0;j<v.size();j++)
            {
                edge ed=v[j];
                long long int a=ed.u;
                long long int b=ed.v;
                long long int w=ed.w;
                if(dis[a]!=INF && dis[a]+w<dis[b])
                {
                    dis[b]=dis[a]+w;
                }
            }
        }
        
        bool cycle=false;
        for(long long int j=0;j<v.size();j++)
        {
            edge ed=v[j];
            long long int a=ed.u;
            long long int b=ed.v;
            long long int w=ed.w;
            if(dis[a]!=INF && dis[a]+w<dis[b])
            {
                cycle=true;
                break;
               
            }
        }
        if(cycle)
        {
         
            cout<<"Negative Cycle Detected"<<endl;
            break;   
        }
        else if (dis[dst]==INF)
        {
            cout<<"Not Possible"<<endl;
            
        }
        else
        {
            cout<<dis[dst]<<endl;
        }
        
        
    }
    
    
    
    

   
    
    
    return 0;
}