#include <bits/stdc++.h>
using namespace std;

int main(){

    int k,n,w,sum=0,i=1;
    cin>>k>>n>>w;
    
    while(w--){
      sum=sum+ (k*i);
      i++;

      

    }
    int borrow;
    borrow=sum-n;
    if(borrow !=0) cout<<borrow;
    else cout<<0;
}