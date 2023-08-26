#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int l,int m,int r)
{
    int leftSize=m-1+1;
    int rightSize=r-m;
    int L[leftSize],R[rightSize];
    int k=0;
    for (int i = l; i <=m; i++)
    {
        L[k]=a[i];
        k++;
    }
    k=0;
    for (int i = m+1; i <=r; i++)
    {
        R[k]=a[i];
        k++;

    }
    // for (int i = 0; i <=leftSize; i++)
    // {
    //     cout<<L[i]<<" ";
    //     /* code */
    // }
    // cout<<endl;
    //  for (int i = 0; i <=rightSize; i++)
    // {
    //     cout<<R[i]<<" ";
    //     /* code */
    // }
    // cout<<endl;
    int i=0,j=0;
    int cur=l;
    while (l<leftSize && j<rightSize)
    {
        if(L[i]<=R[j])
        {
            a[cur]=L[i];
            i++;
        }
        else
        {
            a[cur]=R[j];
            j++;
        }
        cur++;
    }
    while (i<leftSize)
    {
       R[cur]=L[i];
       i++;
       cur++;
    }
     while (j<rightSize)
    {
       R[cur]=R[j];
       j++;
       cur++;
    }
    
    
    
    
    

}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    merge(a,0,3,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
        /* code */
    }
    

    
    return 0;
}