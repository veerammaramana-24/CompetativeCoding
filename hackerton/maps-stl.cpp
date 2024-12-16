#include<bits/stdc++.h>
using namespace std;

int main() {
    int Q;
    cin>>Q;
    unordered_map<string,int>mp;
    while(Q--){
        int n;
        cin>>n;
        if(n==1)
        {
            string x;
            int y;
            cin>>x>>y;
            mp[x]+=y;
        }
         else if(n==2){
            string x;
            cin>>x;
            if(mp.count(x)==1)
            mp.erase(x);
        }
        else{
            string x;
            cin>>x;
            if(mp.count(x)==1)
            {
                cout<<mp[x]<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
    }  
    return 0;
}