class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
                int j=0;
                while(j<nums.size()-1){
                    if(nums[j]==nums[j+1]){
                    nums.erase(nums.begin()+j+1);   
                }
                else{
                    j++;
                }
                }
    return nums.size();
    }
};