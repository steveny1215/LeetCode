class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int major;
        int alert = nums.size()/2;
        unordered_map <int,int> counts;
        for(int i = 0; i < nums.size(); i++){
            counts[nums[i]]++;
        }
        for(auto count: counts){
            if(count.second > (alert)){
                major = count.first;
            }
        }
        return major;
    }
};