#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int main()
{
    int e;
    cin>>e;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    while (e--)
    {
        int a,b;
        cin>>a>>b;
        pq.push({a,b});

    }
    
    while(!pq.empty())
    {
        pair<int,int>sort=pq.top();
        pq.pop();
        cout<<sort.first<<" "<<sort.second<<endl;
    }    
    return 0;
}