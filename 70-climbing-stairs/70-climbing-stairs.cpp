class Solution {
public:
    int climbStairs(int n) {
        if(n == 1 || n==2){
            return n;
        }
        int a = 1;      //1 step
        int b = 2;      //2 step
        int c = 0;
        
        for(int i=3;i<=n;i++){
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
};

