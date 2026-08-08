class Solution {
public:
    bool checkPal(int l,int r,string &cleaned){
        if(l>=r) return true;
        else if(cleaned[l]!=cleaned[r]) return false;
        l++;
        r--;
        return checkPal(l,r,cleaned);
    }
    bool isPalindrome(string s){
        string cleaned ="";
        for(char ch : s){
            if(isalnum(ch)){
                cleaned += tolower(ch);
            }
        }
        int n = cleaned.size();
        int l =0;
        int r=n-1;
        return checkPal(l,r,cleaned);
    }
};