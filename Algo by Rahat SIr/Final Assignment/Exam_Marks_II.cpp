#include<bits/stdc++.h>
using namespace std;
int dp[1005][1005];
bool unbounded_knapsack(int n,int s,int val[]) 
{

    if (s==1000) 
    {
        return true;
    }


    if (n == 0 || s > 1000) 
    {
        return false;
    }
    if (dp[n][s]!=-1) 
    {
        return dp[n][s];
    }

    
    bool ch1= unbounded_knapsack(n,s+val[n-1],val);
    bool ch2=unbounded_knapsack(n-1,s,val);

    
    return dp[n][s]=ch1||ch2;
}

int main() 
{
    int t;
    cin>>t;



    while (t--) 
    {
        int n,s;
        cin>>n>>s;
        int val[n];

        for (int i = 0; i <n; i++) 
        {
            cin>>val[i];
        }

        
        memset(dp,-1,sizeof(dp));
        if (unbounded_knapsack(n,s,val))
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
