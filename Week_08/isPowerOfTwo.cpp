class Solution {
public:
    bool isPowerOfTwo(int n) {
        long l = n;
        if(n == 0) return false;
        return (l & (l-1)) == 0;
    }
};