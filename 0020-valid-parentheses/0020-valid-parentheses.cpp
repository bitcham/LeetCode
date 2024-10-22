class Solution {
public:
    bool isValid(string s) {
        stack<char> a;
        unordered_map<char, char> p = {
            {')', '('},
            {']', '['},
            {'}', '{'},
        };

        for(const auto& c : s){
            if(p.find(c) != p.end()){
                if(a.empty()){
                    return false;
                }
                if(a.top() != p[c]){
                    return false;
                }

                a.pop();
            } else{
                a.push(c);
            }
        }
        return a.empty();

    }
};
