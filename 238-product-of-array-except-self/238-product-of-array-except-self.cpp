class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int p = 1;
        vector<int> res (n,1);
        
        for(int i = n -2; i >= 0; i--){ // the suffix product of right of the array 
            res[i] = res[i+1]*nums[i+1];
        }
        for(int i = 1; i < n; i++){ 
            p = p * nums[i-1];  ////computing prefix product of the left of the array 
            res[i] = res[i]*p;
        }
        return res;
        
    }
};

