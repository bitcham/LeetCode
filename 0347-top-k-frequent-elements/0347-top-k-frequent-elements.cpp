class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counts;
        vector<vector<int>> freq(nums.size() + 1);
        for(const auto& num : nums){
            counts[num]++;
        }
        for(const auto& count : counts){
            freq[count.second].push_back(count.first);
        }

        vector<int> result;
        for(int i = freq.size()-1; i >= 0; i--){
            for(const auto& p : freq[i]){
                if(result.size() < k){
                   result.push_back(p);
                }
            }
            
        }
        return result;
    }
};