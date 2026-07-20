class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        int repeating=-1;
        sort(nums.begin(),nums.end());
        int total=n*(n+1)/2;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(i<nums.size()-1 && nums[i]==nums[i+1]){
                repeating=nums[i];
            }
        }
        int missing=total-sum+repeating;
        ans.push_back(repeating);
        ans.push_back(missing);
        return ans;
    }
};