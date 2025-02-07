class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counts;
        vector<vector<int>> freq(nums.size() + 1);
        for(auto& num : nums){
            counts[num]++;
        }

        for(auto& c : counts){
            freq[c.second].push_back(c.first);
        }

        vector<int> result;
        for(int i = freq.size() - 1; i >= 0; i--){
            for(auto& p : freq[i]){
                if(result.size() == k){
                    return result;
                }
                result.push_back(p);
            }
        }
        return result;
    }
};