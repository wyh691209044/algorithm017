class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        if(grid.size()==0 || grid[0].size()==0){
            return 0;
        }
        // m 为行数
        int m = grid.size();
        // n 为列数
        int n = grid[0].size();
        int dp[m][n];
        dp[0][0] = grid[0][0];
        // 第1列 计算
        for(int i=1;i<m;i++){
            dp[i][0] = dp[i-1][0] + grid[i][0];
        }
        // 第1行 计算
        for(int j=1;j<n;j++){
            dp[0][j] = dp[0][j-1] + grid[0][j];
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                dp[i][j] = min(dp[i-1][j],dp[i][j-1]) + grid[i][j];
            }
        }
        return dp[m-1][n-1];
    }
};