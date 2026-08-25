class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<nums.size();i++){
            int start=nums[i][0];
            int end=nums[i][1];
            if(ans.empty() || start>ans.back()[1]){
                ans.push_back({start,end});
            }
            else{
                ans.back()[1]=max(ans.back()[1],end);
            }
        }
        return ans;
    }
};