class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // code here
        int n = arr.size();
        int count =0;
        for(int i=0;i<=n-2;i++){
            if(arr[i]<=arr[i+1]){
                count++;
            }
        }
        if(count==n-1){
            return true;
        }
        else{
            return false;
        }
    }
};