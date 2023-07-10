class Solution
{   
    public:
    void transpose(vector<vector<int>>& mat, int n)
    { 
        for(int i = 0; i<n;++i){
            for(int j = i; j<n;++j){
                swap(mat[i][j],mat[j][i]);
            }
        }
    }
};
