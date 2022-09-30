class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result;
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        result.push_back(intervals[0]);
        for(int i = 0; i < n; i++){
            if(result.back()[1] >= intervals[i][0]){
                if(result.back()[1] < intervals[i][1]){
                    result.back() = {result.back()[0], intervals[i][1]};
                }else{
                    continue;
                }
            }else{
                result.push_back(intervals[i]);
            }
        }
        return result;
    }
};