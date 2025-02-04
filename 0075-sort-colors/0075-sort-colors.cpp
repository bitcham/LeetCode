class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int, int> mp;
        for(const auto& num : nums){
            mp[num]++;
        }
        int i = 0;
        for(auto& p : mp){
            while(p.second != 0){
                nums[i++] = p.first;
                p.second -= 1;
            }
        }        
    }
};