class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int lo=0;
        int hi=m-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            int r = 0;
            for(int i = 1; i < n; i++){
                if(mat[i][mid] > mat[r][mid]){
                    r = i;
                }
            }
            int left = (mid == 0) ? -1 : mat[r][mid - 1];
            int right = (mid == m - 1) ? -1 : mat[r][mid + 1];
            if (mat[r][mid] > left && mat[r][mid] > right) {
    return {r, mid};
}
else if (left > mat[r][mid]) {
    hi = mid - 1;
}
else {
    lo = mid + 1;
}
        }
        return {-1,-1};
    }
};