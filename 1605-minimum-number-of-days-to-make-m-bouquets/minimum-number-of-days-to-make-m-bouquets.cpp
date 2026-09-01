class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if(1LL*m*k>bloomDay.size()) return -1;
        int lo=*min_element(bloomDay.begin(),bloomDay.end());
        int hi=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            int consecutiveFlowers=0;
            int BouquetsMade=0;
            for(int i=0;i<bloomDay.size();i++){
                if(bloomDay[i]<=mid){
                    consecutiveFlowers++;
                    if(consecutiveFlowers==k){
                    BouquetsMade++;
                    consecutiveFlowers=0;
                }
                }
                else{
                    consecutiveFlowers=0;
                }
            }
               if(BouquetsMade>=m){
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