#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int f=1;
    vector<char> step(n);
    for(int i=0;i<n;i++)
    {
        cin>>step[i];
    }
    int count=0;
    int t=0;
    for(int i=0;i<n;i++)
    {
        if(step[i]=='U')
        {
            count++;
        }
        else
        {
            count--;
        }
        if(count<0 && f==1)
        {
            t++;
            f=0;
        }
        else if(count>=0 && f==0)
        {
            f=1;
        }
    }
    cout<<t;
}
