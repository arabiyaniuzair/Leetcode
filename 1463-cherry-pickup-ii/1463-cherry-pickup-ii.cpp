class Solution {
public:
    int cherryPickup(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> cur(n,vector<int>(n));
         vector<vector<int>> prev(n,vector<int>(n));
        for(int i=m-1;i>=0;i--){
            for(int j1=0;j1<n;j1++){
                for(int j2=0;j2<n;j2++){
                    if(i==m-1){
                        if(j1==j2) cur[j1][j2]=grid[i][j1];
                        else  cur[j1][j2]=grid[i][j1]+grid[i][j2];
                    }
                    else{
                        int grid_value;
                        if(j1==j2) grid_value=grid[i][j1];
                        else grid_value=grid[i][j1]+grid[i][j2];
                    
                    vector<int> x(9,INT_MIN);
                    if(j1>0 && j2>0) x[0]=prev[j1-1][j2-1];
                    if(j1>0) x[1]=prev[j1-1][j2];
                    if(j1>0 && j2<n-1) x[2]=prev[j1-1][j2+1];
                    if(j2>0) x[3]=prev[j1][j2-1];
                    x[4]=prev[j1][j2];
                    if(j2<n-1) x[5]=prev[j1][j2+1];
                    if(j1<n-1 && j2>0) x[6]=prev[j1+1][j2-1];
                    if(j1<n-1) x[7]=prev[j1+1][j2];
                    if(j1<n-1 && j2<n-1) x[8]=prev[j1+1][j2+1];
                
                int max_x=*max_element(x.begin(),x.end());
                cur[j1][j2]=max_x+grid_value;
                    }
            }
        }
        prev=cur;
        }  
        return  cur[0][n-1]; 
    }
};