class Solution {
public:
    bool solve(string& s,int left,int right){
        if(left>=right) return true;
        
        while (left < right && !isalnum(s[left])) left++;
        while (left < right && !isalnum(s[right])) right--;
        if(tolower(s[left])!=tolower(s[right])) return false;
        return solve(s,left+1,right-1);
    }
    bool isPalindrome(string s) {
        return solve(s,0,s.size()-1);
    }
};