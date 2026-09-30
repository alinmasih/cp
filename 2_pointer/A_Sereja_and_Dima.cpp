#include <bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
int arr[t];
for(int i=0; i<t;i++){
    cin>>arr[i];
    
}
int s=0,d=0;
int i=0, j=t-1;

bool flag=true;
   while(i<=j){
    if(flag){
        if(arr[j]>arr[i]){
        s+=arr[j];
        j--;
        
    }
    else{
        s+=arr[i];
        i++;
       
    }
    flag=false;
    }
    else{
        if(arr[j]>arr[i]){
        s+=arr[j];
        j--;
    }
    else{
        s+=arr[i];
        i++;
    }
    flag=true;
    }
    
   }


cout<<s<<" "<<d;
}