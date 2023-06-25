
class Solution
{
public:
    vector<vector<int>> uniqueRow(int M[MAX][MAX], int row, int col)
    {
        vector<bool> vis(row, false); // Avoid redundant checks by examining the visited array for non-unique index values.
        vector<vector<int>> out;
        
        for (int i = 0; i < row; ++i) {
            if (vis[i]) // If we encounter the same row value, we continue.
                continue;
            
            vis[i] = true; // Mark the ith index as visited.
            vector<int> binArr(col);
            
            for (int j = 0; j < col; ++j) // Convert the unique row array into a vector.
                binArr[j] = M[i][j];
                
            out.push_back(binArr); // Push the unique row into the output vector.
            
            for (int j = i + 1; j < row; ++j) {
                bool isEqual = true;
                
                for (int k = 0; k < col; ++k) { // Logic to check for two equal rows.
                    if (M[i][k] != M[j][k]) {
                        isEqual = false;
                        break;
                    }
                }
                
                vis[j] = isEqual | vis[j]; // If we find that this row is not unique, mark it as visited.
            }
        }
        
        return out;
    }
};


