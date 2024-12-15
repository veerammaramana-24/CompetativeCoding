#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    float ps=0, ne=0, ze=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            ps++;
        }
        else if(arr[i]<0)
        {
            ne++;
        }
        else
        {
            ze++;
        }
    }
    cout<<fixed<<setprecision(6)<<float(ps/n)<<endl;
    cout<<fixed<<setprecision(6)<<float(ne/n)<<endl;
    cout<<fixed<<setprecision(6)<<float(ze/n)<<endl;
}
