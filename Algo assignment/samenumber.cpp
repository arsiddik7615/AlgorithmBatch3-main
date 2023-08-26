#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int x;
    cin>>x;
    int l=0;
    int r=n-1;
    bool flag=false;
    bool samesame=false;
    while (l<=r)
    {
        int mid_index=(l+r)/2;
        if (a[mid_index]==x)
        {
            flag=true;
            if(mid_index-1>=0 && a[mid_index-1]==x)
            {
                samesame=true;
                // cout<<"YES"<<endl;
            }
            else if (mid_index+1<n && a[mid_index+1]==x)
            {
                samesame=true;
                // cout<<"YES"<<endl;
            }
            
            break;
        }
        if(x>a[mid_index])
        {
            l=mid_index+1;
        }
        else
        {
            r=mid_index-1;
        }
     
       
    }
   
   
    if(samesame)
    {
        cout<<"YES"<<endl;
    }
    
    else
    {
        cout<<"NO"<<endl;
    }
    
    return 0;
}
