class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0;
        int count=0;
        for(int i=0;i<s.size();i++){
            string temp="";
            for(int j=i;j<s.size();j++){
                if(temp.find(s[j])!=string::npos) {
                    break;
                }
                temp+=s[j];
                count++;
            }
            ans=max(ans,count);
            count=0;
        }
        return ans;
    }
};