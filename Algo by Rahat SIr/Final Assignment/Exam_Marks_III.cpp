#include<bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int unbounded_knapsack(int n,int s,int val[]) 
{

    if (s==1000) 
    {
        return 0;
    }


    if (n== 0 || s> 1000) 
    {
        return INT_MAX-1;
    }
    if (dp[n][s]!=-1) 
    {
        return dp[n][s];
    }

    
    int ch1= 1+unbounded_knapsack(n,s+val[n-1],val);
    int ch2=unbounded_knapsack(n-1,s,val);

    
    return dp[n][s]=min(ch1,ch2);
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


        int result=unbounded_knapsack(n,s,val);

        if (result==INT_MAX-1)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<result<<endl;
        }



    




    }

    return 0;
}
