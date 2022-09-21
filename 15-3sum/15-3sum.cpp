class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        unordered_map<int,int> mark;
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end()); 
        for(int i=0;i<n;i++){
            mark[nums[i]]=i;    // store the position of every number, we need this to find the position of remaining value as discussed before
        } 
        for(int i=0;i<n;i++){
            if(i and nums[i-1] == nums[i]){ 
                continue;
            } // if two numbers are same, skip
            for(int j=i+1;j<n;j++){ // j starts from i+1, means i < j 
                if(j!=i+1 and nums[j]==nums[j-1]){
                    continue;           //again, if two numbers are same, skip
                }
                int rem = 0 - (nums[i]+nums[j]); // find remaining value 
                if(mark[rem]>j){ // check the position of remaining value, if this is greater than j, then k > j and this is a valid triplet
                
                    vector<int> a = {nums[i],nums[j],rem}; 
                    ans.push_back(a);
                }
            }
        }
        return ans;
    }
};