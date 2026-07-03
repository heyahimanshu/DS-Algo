class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int n = arr.size();
        int maxnum = INT_MIN;
        for(int i=0;i<=n-1;i++){
            if(arr[i]> maxnum){
                maxnum = arr[i];
            }
        }
        return maxnum;
    }
};
