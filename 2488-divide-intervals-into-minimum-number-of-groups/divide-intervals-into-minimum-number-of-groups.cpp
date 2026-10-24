class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        vector<int> diff(1e6+5,0);
        for(int i=0;i<intervals.size();i++){
            diff[intervals[i][0]]++;
            diff[intervals[i][1]+1]--;
        }
        int maxOverlap=0;
        int overlap=0;
        for(int i=0;i<1e6+5;i++){
            overlap+=diff[i];
            maxOverlap=max(maxOverlap,overlap);
        }
        return maxOverlap;
    }
};