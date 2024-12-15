#include <bits/stdc++.h>

using namespace std;

int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    sort(arr,arr+5);
    long long minsum=0,maxsum=0;
    for(int i=0;i<4;i++){
        minsum+=arr[i]; 
    }
    for(int i=1;i<5;i++){
        maxsum+=arr[i];
    }
    cout<<minsum<<" "<<maxsum;
}
