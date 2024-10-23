class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n = students.size();
        unordered_map<int, int> mp;
        for(auto i : students){
            mp[i]++;
        }
        for(auto i : sandwiches){
            if(mp[i] > 0){
                n -= 1;
                mp[i]--;
            }
            else{
                return n;
            }
        }
        return n;
    }
};