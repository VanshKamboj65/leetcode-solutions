class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int lo=*max_element(weights.begin(),weights.end());
        int hi=accumulate(weights.begin(),weights.end(),0);
        int ans=-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            int currentWeight=0;
            int daysNeeded=1;
            for(int i=0;i<weights.size();i++){
                if(currentWeight+weights[i]<=mid){
                    currentWeight+=weights[i];
                }
                else{
                    daysNeeded++;
                    currentWeight=weights[i];
                }
            }
            if(daysNeeded<=days){
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