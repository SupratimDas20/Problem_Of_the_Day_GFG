
class Solution {
public:
    int isDivisible(string s) {
        int rem = 0;
        
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '1') {
                if (i % 2)
                    rem += 2;
                else
                    rem++;
            }
        }
        
        return rem % 3 == 0;
    }
};
