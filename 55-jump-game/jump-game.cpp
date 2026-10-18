class Solution {
public:
    bool canJump(vector<int>& nums) {
        int Maximum=nums[0];
        for(int i=0;i<nums.size();i++){
            if(i>Maximum) return false;
            else{
                Maximum=max(Maximum,i+nums[i]);
            }
        }
        return true;
    }
};