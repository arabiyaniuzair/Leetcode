class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n=obstacleGrid[0].size();
        int m=obstacleGrid.size();
        vector<int> prev(n);
       vector<int> cur(n);
        // return helper(m-1,n-1,grid,dp);
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
               if(obstacleGrid[i][j]==1){
                   cur[j]=0;
               }else if(i==0 && j==0){
                   cur[0]=1;
               }
               else{
                   int right=0;
                   int down=0;
                   if(j>0){
                       right=cur[j-1];
                   }
                   if(i>0){
                       down=prev[j];
                   }
                   cur[j]=down+right;
               }
            }
            prev=cur;
        }
        return prev[n-1];
    }
};