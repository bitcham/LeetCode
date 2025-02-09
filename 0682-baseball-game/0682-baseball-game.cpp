class Solution {
public:
    int calPoints(vector<string>& operations) {
        int result = 0;
        vector<int> temp;
        for(const auto& s : operations){
            if(s == "+" && temp.size() >= 2){
                temp.push_back(temp[temp.size() - 1] + temp[temp.size() - 2]);
            } else if(s == "D" && temp.size() >= 1){
                temp.push_back(temp[temp.size() - 1] * 2);
            } else if(s == "C" && temp.size() >= 1){
                temp.pop_back();
            } else{
                temp.push_back(stoi(s));
            }
        }
        for(auto& n : temp){
            result += n;
        }
        return result;
    }
};