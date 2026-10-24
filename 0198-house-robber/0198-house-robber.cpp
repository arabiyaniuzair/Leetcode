class Solution {
public:
     int helper(int i,vector<int> &arr,vector<int> &dp){
        if(i==0) return arr[0];
        if(i==1) return max(arr[0],arr[1]);
        if(dp[i]!=-1) return dp[i];
        int pick_value=arr[i]+helper(i-2,arr,dp);
        int not_pick=helper(i-1,arr,dp);
        dp[i]=max(pick_value,not_pick);
        return dp[i];
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1);
        return helper(n-1,nums,dp); 
    }
};