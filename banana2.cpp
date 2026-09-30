#include <bits/stdc++.h>
using namespace std;

int main(){

    int k,n,w,sum=0;
    cin>>k>>n>>w;
    
    
     sum= k*((w*(w+1))/2 -n);
    
    int borrow;
    borrow=sum-n;
    if(borrow !=0) cout<<borrow;
    else cout<<0;
}