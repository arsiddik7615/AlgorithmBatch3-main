#include<bits/stdc++.h>
using namespace std;
const int N=1e5+7;
const int M=1e5+7;
int nums1[N];
int nums2[M];
void mergeSortedArrays(int nums1[],int nums2[],int size1, int size2, int mergedArr[])
{
    int i=size1-1;
    int j=size2-1;
    int k=0;
    while (i>=0 && j>=0)
    {
        if(nums1[i]<=nums2[j])
        {
            mergedArr[k]=nums1[i];
            i--;
        }
        else
        {
            mergedArr[k]=nums2[j];
            j--;
        }
        k++;
    }
    while (i>=0)
    {
        mergedArr[k]=nums1[i];
        i--;
        k++;
    }
    while (j>=0)
    {
        mergedArr[k]=nums2[j];
        j--;
        k++;
    }
    
    
}
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
       cin>>nums1[i];
    }
    int size1=n;
    int m;
    cin>>m;
    for (int j = 0; j < m; j++)
    {
       cin>>nums2[j];
    }
    int size2=m;

    int mergedSize = size1+size2;
    int mergedArr[mergedSize];

    mergeSortedArrays(nums1,nums2,size1,size2,mergedArr);

    for (int i =mergedSize-1; i >= 0; i--)
    {
        cout<<mergedArr[i]<<" ";
        
    }
    cout<<endl;
    return 0;
}