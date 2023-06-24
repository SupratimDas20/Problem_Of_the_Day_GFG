class Solution{   
public:
    int klengthpref(string arr[], int n, int k, string str){    
        if(k>str.size())
            return 0;
            
        string toSearch = str.substr(0,k); 
        int c = 0;

        for(int i = 0; i<n; ++i){
            if(arr[i].substr(0,k) == toSearch)
                ++c;
        }

        return c;
    }
};
