
class Solution {
  public:
    double switchCase(int choice, vector<double> &arr) {
        // code here
        double pi = 3.141592653589793;
        double ans;
        switch(choice){
            case 1:{
                double R = arr[0];
                ans= pi*R*R;
                break;
            }
            case 2:{
                double L = arr[0];
                double B = arr[1];
                ans = L*B; 
                break;
            }
        }
        return ans;
    }
};
