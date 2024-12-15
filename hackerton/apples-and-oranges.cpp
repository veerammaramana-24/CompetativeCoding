#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,t;
    cin>>s>>t;
    int a,b;
    cin>>a>>b;
    int m,n;
    cin>>m>>n;
    vector<int>app(m);
    vector<int>org(n);
    for(int i=0;i<m;i++)
    {
        cin>>app[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>org[i];
    }
    int ans1=0,ans2=0;
    for(int i=0;i<m;i++)
    {
        int b=app[i]+a;
        if(b>=s && b<=t)
        {
            ans1++;
        }
    }
     for(int i=0;i<n;i++)
    {
        int d=org[i]+b;
        if(d>=s && d<=t)
        {
            ans2++;
        }
    }
    cout<<ans1<<endl;
    cout<<ans2<<endl;
}
