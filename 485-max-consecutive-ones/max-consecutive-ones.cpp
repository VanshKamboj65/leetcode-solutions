class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int sum=0,count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                sum++;
                count=max(sum,count);
            }
            if(nums[i]==0){
                sum=0;
            }
        }
        return count;
    }
};