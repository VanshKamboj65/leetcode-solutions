class Solution {
public:
    string frequencySort(string s) {
        int freq[128]={0};
        for(char ch:s){
            freq[ch]++;
        }    
        string ans="";
       while(true){
        int index=-1;
        int maxi=0;
        for(int i=0;i<128;i++){
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