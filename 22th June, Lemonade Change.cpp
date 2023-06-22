class Solution {
  public:
    bool lemonadeChange(int n, vector<int> &bills) {
        map<int,int> mp;
        for(auto bill: bills){
            ++mp[bill];                      // add bill note to cash box.
            
            int change = bill - 5;           // cut the price of lemonade and provide remaining change.
            
            if(change == 15 && mp[10] > 0){  // provide one 10 bill note if change value is 15.
                --mp[10];
                change -= 10;
            }
            
            if(change>=5){                   // last option, provide 5 bill notes as many as needed.
                if(change/5 <= mp[5]){  
                    mp[5] -= change/5;
                    change = 0;
                }else
                    return false;            // if we cannot provide 5 bill notes in change return false. 
            }
        }
        
        return true;
    }
};
