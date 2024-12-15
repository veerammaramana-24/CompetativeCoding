#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<vector<int>>arr[n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[j])
        {
           int forward=0;
           forward+=arr[i][j]; 
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]+arr[j]==n-1)
        {
            int backward=0;
            backward+=arr[i][j]; 
        }
    }
    int x=forward-backward;
    cout<<abs(x);
}