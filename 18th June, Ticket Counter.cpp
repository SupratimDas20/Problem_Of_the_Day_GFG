class Solution {
  public:
        int distributeTicket(int n, int k) {
            int op = n/k;
            int left = (op/2)*k;
            int right = n - (op/2)*k + 1;
            
            if(right - left > (k + 1))
                return left + k + 1;
            
            return right - (right - left != 1);
        }
};
