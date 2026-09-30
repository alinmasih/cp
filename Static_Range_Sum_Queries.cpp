#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    long long a[n];
    for(int i=0; i<n;i++){
        cin>>a[i];
    }
    long long prefix[n+1];
    prefix[0]=0;
    for(int i=1;i<n+1;i++){
        prefix[i]=prefix[i-1]+a[i-1];
        // cout<<" "<<prefix[i];
    }
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<prefix[r]-prefix[l-1]<<endl;
    }
}