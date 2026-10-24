class Solution {
public:
    int fib(int n) {
     if (n==0) return 0;
        if (n==1) return 1;
        int priority_1=1;
        int  priority_2=0;
        int  curr=0;
        for(int i=2;i<=n;i++){
            curr=priority_1+priority_2;
            priority_2=priority_1;
            priority_1=curr;
        }
        return curr;
    }   
    
};