class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
    int m=grid.size();
    int n=grid[0].size();
    vector<int> cur(n),privious(n);
    //   return helper(m-1,n-1,grid,dp);
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==0 && j==0) cur[0]=grid[0][0];
            else{
            int right=INT_MAX,down=INT_MAX;
            if(i>0) down=privious[j];
            if(j>0) right=cur[j-1];
            cur[j]=grid[i][j]+min(down,right);
            }
        }
        privious=cur;
    }
      return cur[n-1];  
            
    }
};