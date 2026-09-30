    class Solution {
  public:
    bool checkEqual(vector<int>& a, vector<int>& b) {
        
        const int N = 50000;
        
        int arrA[N], arrB[N];
        
        for(int i=0; i< a.size(); i++){
            arrA[a[i]]++;
        }
        
        for(int i=0; i< b.size(); i++){
            arrB[b[i]]++;
        }
        
        bool ans=true;
        
        for(int i=0;i<N; i++){
            if(arrA[i]!=arrB[i]){
                ans=false;
                break;
            }
        }
        return ans;
        
    }
};