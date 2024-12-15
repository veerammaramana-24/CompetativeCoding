#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    vector<int>arr1;
    vector<int>arr2;
    for(int i=0;i<3;i++)
    {
        int x;
        cin>>x;
        arr1.push_back(x);
    }
    for(int i=0;i<3;i++)
    {
        int x;
        cin>>x;
        arr2.push_back(x);
    }
    int alice=0,bob=0;
    for(int i=0;i<3;i++)
    {
       if(arr1[i]>arr2[i])
       {
           alice++;
       }
       if(arr1[i]<arr2[i])
       {
           bob++;
       }
    }
    cout<<alice<<" "<<bob;
}
