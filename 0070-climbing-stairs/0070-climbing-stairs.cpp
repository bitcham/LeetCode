class Solution {
public:
    int climbStairs(int n) {
        int sum = 0;
        if(n == 1 || n == 2){
            return n;
        } else if(n <= 0){
            return 0;
        }
        int prev = 1;
        int curr = 2;

        for(int i = 3; i <= n; i++){
            int next = prev + curr;
            prev = curr;
            curr = next;
        }

        return curr;
    }
};