class Solution {
  public:
    int matchGame(long long n) {
        if(n%5)
            return n%5;
        
        return -1;
    }
};
