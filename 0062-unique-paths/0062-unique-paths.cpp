class Solution {
public:
    int uniquePaths(int m, int n) {
     vector<vector<int>> dp(n,vector<int>(m));
     for(int i=0;i<=n-1;i++) dp[i][0]=1;
   for(int j=0;j<=m-1;j++) dp[0][j]=1;
   
     for(int i=1;i<n;i++){
         for(int j=1;j<m;j++){
             int left=dp[i-1][j];
             int right=dp[i][j-1];
             dp[i][j]=left+right;
              }
       
    }
     return dp[n-1][m-1]; 
    }
};