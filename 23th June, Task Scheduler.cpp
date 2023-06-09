class Solution {
  public:
    int leastInterval(int n, int k, vector<char> &tasks) {
        priority_queue<int> pq;
        vector<int> taskFreq(26,0);
        int time = 0; 

        for(auto i:tasks)
             taskFreq[i-'A']++;  
        
        for(auto i:taskFreq){
            if(i) 
            pq.push(i);
        }

        while(!pq.empty()){
            int itrK = k+1;                 // k+1 is the CPU cooldown time, so we have to iterate k+1
            vector<int> restTask;

            while(!pq.empty() && itrK){
                int freqMax = pq.top();     // find the highest frequency task
                pq.pop();

                if(freqMax>1)               // if task are remaining then add them in rest task
                    restTask.push_back(freqMax-1); 

                ++time; 
                --itrK; 
            }

            for(auto i:restTask)
                pq.push(i); 

            if(pq.empty())
                break;                      // all tasks are completed so break the loop
            
            time += itrK;                   // add idle time count 
        }

        return time;
    }
};
