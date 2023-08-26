#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int> adj[N];

int main()
{
    
    
    int n,m;
    cin >> n >> m;

    for(int i=0;i<m;i++)
    {
    	int u,v;
    	cin >> u >> v;
    	adj[u].push_back(v);
    	adj[v].push_back(u); 
    }
    
    int s;
    cin>>s;
    int cnt=0;
   
    for(auto v:adj[s])
    {
        cnt++;
    }

    cout<<cnt<<endl;
    		
   
 	return 0;
    
}