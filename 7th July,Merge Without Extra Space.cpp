

class Solution{
public:
    long long offset = 1e7;
    
    void newValueInArray(long long arr1[], long long arr2[], int k, int n, long long newVal){
         if (k < n)
            arr1[k] += offset * newVal;
        else
            arr2[k - n] += offset * newVal;
    }

    void merge(long long arr1[], long long arr2[], int n, int m)
    {
        int i = 0, j = 0, k = 0;
        
        while (i < n && j < m) {
            if (arr1[i] % offset < arr2[j] % offset) {
                newValueInArray(arr1, arr2, k, n, arr1[i] % offset);
                ++i;
            }
            else {
                 newValueInArray(arr1, arr2, k, n, arr2[j] % offset);
                ++j;
            }
            ++k;
        }

        while (i < n) {
            newValueInArray(arr1, arr2, k, n, arr1[i] % offset);
            ++i;
            ++k;
        }

        while (j < m) {
            newValueInArray(arr1, arr2, k, n, arr2[j] % offset);
            ++j;
            ++k;
        }

        for (int i = 0; i < n; ++i)
            arr1[i] /= offset;
        for (int i = 0; i < m; ++i)
            arr2[i] /= offset;
    }
};

