class Solution {
public:
    int mySqrt(int x) {
        if(x==1) return 1;
        int ans=0;
        int lo=0;
        int hi=x-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if((long long)mid*mid<=x){
                ans=mid;
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }   
        return ans;
    }
};