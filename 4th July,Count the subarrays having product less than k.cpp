
class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int out = 0;
        int i = 0, j = 0;
        long long currProd = 1;
        
        while(i < n && j < n) {
            currProd *= a[j];
            
            while(currProd >= k && i < j) {
                currProd /= a[i];
                i++;
            }
            
            if(currProd < k)
                out += j - i + 1;
                
            j++;
        }
        return out;

    }
};
