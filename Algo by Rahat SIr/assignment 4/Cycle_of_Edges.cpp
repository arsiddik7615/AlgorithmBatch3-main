#include <bits/stdc++.h>
using namespace std;
const int N=1e5+7;
int parent[N];
int parentLevel[N];
long long n, e;
long long a, b;
void dsu_set(int n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = -1;
        parentLevel[i] = 0;
    }
}
int dsu_find(int node)
{
    while (parent[node] != -1)
    {
        node = parent[node];
    }
    return node;
}
void dsu_union(int a, int b)
{
    int leaderA = dsu_find(a);
    int leaderB = dsu_find(b);
    if (leaderA != leaderB)
    {
        if (parentLevel[leaderA] > parentLevel[leaderB])
        {
            parent[leaderB] = leaderA;
        }
        else if (parentLevel[leaderB] > parentLevel[leaderA])
        {
            parent[leaderA] = leaderB;
        }
        else
        {
            parent[leaderB] = leaderA;
            parentLevel[leaderA]++;
        }
    }
}
int main()
{
    
    cin >> n >> e;
    dsu_set(n);
    int cnt=0;
    bool flag=false;
    while (e--)
    {
        
        cin >> a >> b;
        int leaderA = dsu_find(a);
        int leaderB = dsu_find(b);
        // cout << leaderA << " " << leaderB << endl;
        if (leaderA == leaderB)
        {
            cnt++;
            flag=true;
           
        }
        else
        {
            dsu_union(a, b);
        }
    }
    if(flag==false)
    {
        cout<<'0'<<endl;
    } 
    else
    {
        cout<<cnt<<endl;
    }
    return 0;
}