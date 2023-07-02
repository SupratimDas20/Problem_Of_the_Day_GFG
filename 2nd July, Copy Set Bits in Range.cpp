
class Solution {
public:
    int setSetBit(int x, int y, int l, int r) {
        int maskLen = r - l + 1;
        int mask = (1 << maskLen) - 1;
        mask = mask << (l - 1);
        y = y & mask;
        return (x | y);  
    }
};
