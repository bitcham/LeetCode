class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> new_nums;
        for(int i = 0; i < nums.size() * 2; i++){
            new_nums.push_back(nums[i % nums.size()]);
        }
        return new_nums;
    }
};