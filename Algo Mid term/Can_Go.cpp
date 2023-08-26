#include <bits/stdc++.h>
using namespace std;
long long int n,e;
const int N = 1005;
vector<pair<long int,long long int>> v[N];
long long int dis[N];
bool vis[N];
void dijkstra(int s)
{
     priority_queue<pair<long long int,long long int>, vector<pair<long long int, long long int>>, greater<pair<long long int, long long int>>> pq;
    pq.push({0,s});
    dis[s] = 0;
    while (!pq.empty())
    {
        pair<long long int,long long int>parent=pq.top();
        pq.pop();
        long long int parentNode=parent.second;
        if(vis[parentNode])
        {
            continue;
        }
        vis[parentNode]=true;
        long long int parentCost=parent.first;
        for (int i = 0; i < v[parentNode].size(); i++)
        {
            pair<int, int> child = v[parentNode][i];
            long long int childNode = child.first;
            long long int childCost = child.second;
            if(parentCost+childCost<dis[childNode])
            {
                dis[childNode]=parentCost+childCost;
                pq.push({dis[childNode],childNode});
            }
        }
    }
}
int main()
{
    
    cin >> n >> e;
    while (e--)
    {
        long long int a, b, w;
        cin >> a >> b >> w;
        v[a].push_back({b, w});
        // v[b].push_back({a, w});
    }
    for (int i = 1; i <= n; i++)
    {
        dis[i] = LONG_MAX;
    }
    long long int s;
    cin>>s;
    dijkstra(s);
    int t=1000;
    cin>>t;
    while (t--)
    {
       
        long long int d,w;

        cin>>d>>w;
        if(dis[d]<=w)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    
    
  
    return 0;
}