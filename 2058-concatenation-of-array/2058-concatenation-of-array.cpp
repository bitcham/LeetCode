class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        if(nums.size() == 0) return nums;
        int n = nums.size();
        nums.resize(2 * n);
        for(int i = nums.size() - n, j = 0 ; i < nums.size(); i++, j++){
            nums[i] = nums[j];
        }
        return nums;
    }
};