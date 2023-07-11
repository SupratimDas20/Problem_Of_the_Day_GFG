class Solution {
public:
    int findK(int a[MAX][MAX], int n, int m, int k) {
        
        int kth = 0;
        int istart = 0, iend = n - 1, jstart = 0, jend = m - 1;
        
        while (istart <= iend && jstart <= jend) {
            for (int j = jstart; j <= jend; ++j) {
                ++kth;
                if (k == kth) return a[istart][j];
            }
            ++istart;
            
            for (int i = istart; i <= iend; ++i) {
                ++kth;
                if (k == kth) return a[i][jend];
            }
            --jend;
            
            for (int j = jend; j >= jstart; --j) {
                ++kth;
                if (k == kth) return a[iend][j];
            }
            --iend;
            
            for (int i = iend; i >= istart; --i) {
                ++kth;
                if (k == kth) return a[i][jstart];
            }
            ++jstart;
        }
    }
};
