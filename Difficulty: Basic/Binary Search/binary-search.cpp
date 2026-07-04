class Solution {
  public:
    bool binarySearch(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        for(int i=0;i<=n-1;i++){
            if(arr[i]==k){
                return true;
            }
        }
            return false;
    }
};