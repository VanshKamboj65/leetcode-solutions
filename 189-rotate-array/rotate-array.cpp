class Solution {
public:
   void reverse(vector<int>& nums, int start, int end) {
        std::reverse(nums.begin() + start, nums.begin() + end);
    }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        reverse(nums,0,n);
        reverse(nums,0,k);
        reverse(nums,k,n);
    }
};