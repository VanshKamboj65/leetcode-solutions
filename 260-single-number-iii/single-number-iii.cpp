class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int a=0;
        for(int i=0;i<nums.size();i++){
            a^=nums[i];
        }
        unsigned int bit = (unsigned int)a & (-(unsigned int)a);
        int x=0,y=0;
        for(int i=0;i<nums.size();i++){
            if ((static_cast<unsigned int>(nums[i]) & bit) != 0) {
                x^=nums[i];
            }
            else{
                y^=nums[i];
            }
        }
        return {x,y};
    }
};