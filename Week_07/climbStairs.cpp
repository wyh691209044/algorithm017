class Solution {
public:
    int climbStairs(int n) {
    if (n == 1 || n == 2) return n;
        int result = 0,step1 = 1,step2 = 2;
        for (int i=3;i<=n;i++) {
            result = step1 + step2;
            step1 = step2;
            step2 = result;
        }
        return result;
    }
};