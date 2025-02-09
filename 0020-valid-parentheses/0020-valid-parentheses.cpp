class Solution {
public:
    bool isValid(string s) {
       stack<char> temp;
       unordered_map<char, char> mp{
            {')','('},
            {'}', '{'},
            {']', '['}
       };

       for(auto& c : s){
            if(c == ')' || c == '}' || c == ']'){
                if(temp.empty()){
                    return false;
                }else if(temp.top() == mp[c]){
                    temp.pop();
                }else{
                    return false;
                }
            } else{
                temp.push(c);
            }
       }
        return temp.empty();
    }
};