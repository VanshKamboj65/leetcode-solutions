class Solution {
public:
    string frequencySort(string s) {
        int freq[256]={0};
        for(char ch:s){
            freq[ch]++;
        }
        string ans="";
        while(true){
            int maxi=0;
            int index=-1;
            for(int i=0;i<256;i++){
                if(freq[i]>maxi){
                    maxi=freq[i];
                    index=i;
                }
            }
            if(maxi==0) break;
            while(maxi--){
                ans.push_back(index);
            }
            freq[index]=0;
        }
        return ans;
    }
};