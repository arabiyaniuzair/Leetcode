class Solution {
public:
    int climbStairs(int n) {
         if (n==0) return 1;
        if(n==1) return 1;
        int current=0;
        int requiured_1=1;
        int requiured_2=1;
        
        for(int i=2;i<=n;i++){
            current=requiured_1+requiured_2;
            requiured_2=requiured_1;
            requiured_1=current;
        }
        return current;
    }
};