class Solution {
public:
    int helper(int start,int end,vector<int>& arr){
        int p1=0,p2=0;
        for(int i=start;i<=end;i++){
            int temp=p1;
            p1=max(p1,p2+arr[i]);
            p2=temp;
        }
        return p1;
    }
    int rob(vector<int>& nums) {
    int n=nums.size();
     if(n==1) return nums[0];
       
        return max(helper(0,n-2,nums),helper(1,n-1,nums));
    }
};