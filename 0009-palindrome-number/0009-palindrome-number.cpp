class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        string a = to_string(x);
        string b = a;
        reverse(a.begin(), a.end());
        if( a == b){
            return true;
        }
        return false;
    }
};