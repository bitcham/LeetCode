class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int cnt, temp;
        temp = nums[0];
        for (int i = 0; i < nums.size(); i++){
            if(temp != nums[i]){
                cnt++;
                nums[cnt] = nums[i];
                temp = nums[cnt];
            }
        }
        for(int i = cnt + 1; i < nums.size(); i++){
            nums[i] = NULL;
        }

        return cnt + 1;
    }
};