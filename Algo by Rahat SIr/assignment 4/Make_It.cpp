#include<bits/stdc++.h>
using namespace std;
const int t=1005;
const int n=1e5+5;
bool knapsack(int cur,int trg )
{
    if(cur==trg)
        return true;
    if(cur>trg)
        return false;

        return knapsack(cur+3,trg) || knapsack (cur*2,trg);   
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int n;
        cin>>n;
        if(knapsack(1,n))
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