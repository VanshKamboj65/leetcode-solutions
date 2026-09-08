class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int freq1[256]={0};
        int freq2[256]={0};
        for(int i=0;i<s.length();i++){
            if(freq1[s[i]]==0 && freq2[t[i]]==0){
                freq1[s[i]]=t[i];
                freq2[t[i]]=s[i];
            }
            else if(freq1[s[i]]!=t[i] || freq2[t[i]]!=s[i]){
                return false;
            }
        }
        return true;
    }
};