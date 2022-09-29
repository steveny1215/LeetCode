class Solution {
public:
    void solve(int index, vector<vector <int>>&ans, int n, vector<int> &nums){
        if(index == n){
            ans.push_back(nums);
            return;
        }
        for(int i = index; i < n; i++){
            swap(nums[index], nums[i]);
            solve(index+1, ans, n, nums);
            swap(nums[index], nums[i]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        solve(0, result, nums.size(), nums);
        return result;
        
    }
};