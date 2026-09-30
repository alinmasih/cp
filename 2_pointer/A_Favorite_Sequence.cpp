#include <bits/stdc++.h>
using namespace std;

int main(){
int t;

cin>>t;

while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
}

int brr[n];
int left=0;
int right=n-1;
int i=0;
while(left<=right){
    cout<<arr[left];
    left++;
    cout<<" ";
    if(left>right) break;
    cout<<arr[right];
    right--;
    cout<<" ";
}



}


}