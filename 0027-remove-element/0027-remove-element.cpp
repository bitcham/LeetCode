class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size() == 0) return 0;
        int idx = -1;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != val){
                idx++;
                nums[idx] = nums[i];
            }
        }
        for(int i = idx + 1; i < nums.size(); i++){
            nums[i] = 0;
        }
    
        return idx + 1;
    }
};