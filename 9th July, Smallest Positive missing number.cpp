class Solution {
public:
    int missingNumber(int arr[], int n) {
        unordered_map<int, bool> mp;
        
        // Mark presence of elements in the map
        for(int i = 0; i < n; ++i) {
            mp[arr[i]] = true;
        }
        
        int nin = 1;
        
        // Find the first missing number
        while(true) {
            if(mp.find(nin) == mp.end())
                return nin;
            ++nin;
        }
    }
};
