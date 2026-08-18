class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int left=nums[0],maxprofit=0;
        for(int i=0;i<nums.size();i++){
            maxprofit=max(maxprofit,nums[i]-left);
            left=min(left,nums[i]);
        }
        return maxprofit;
    }
};