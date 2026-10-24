class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
     int n=triangle.size();
     vector<int>prev(n),cur(n);
        // return f(0,0,triangle,n,dp);
        for(int j=0;j<n;j++){
            prev[j]=triangle[n-1][j];
        }
        for(int i=n-2;i>=0;i--){
            for(int j=0;j<=i;j++){
                int down=triangle[i][j]+prev[j];
                int right=triangle[i][j]+prev[j+1];
                cur[j]=min(down,right);
            }
            prev=cur;
        }
        return prev[0];   
    }
};