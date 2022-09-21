
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> counts;
        for(int i = 0; i < nums.size(); i++){
            counts[nums[i]]++;
        }
        for(auto count: counts){
            if(count.second >= 2){
                return true;
            }
        }
        return false;
    }
};
