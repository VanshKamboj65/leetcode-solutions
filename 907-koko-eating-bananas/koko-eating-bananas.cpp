class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int lo=1;
        int hi=*max_element(piles.begin(),piles.end());
        int ans;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            long long totalHours=0;
            for(int i=0;i<piles.size();i++){
                totalHours+=(piles[i]+mid-1)/mid;
            }
            if(totalHours<=h){
                ans=mid;
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        return ans;
    }
};