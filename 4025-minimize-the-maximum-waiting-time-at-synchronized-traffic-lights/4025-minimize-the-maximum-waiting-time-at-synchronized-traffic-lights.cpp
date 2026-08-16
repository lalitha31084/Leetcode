class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
        int mx=0;
        for(int x:lights){
            mx=max(mx,x);
        }
        int lal=0;
        for(int i:arrivalTime){
            int r=i%period;
                int w;
                if(r<mx)
                    w=0;
                else
                    w=period-r;
            
            lal=max(lal,w);
            
        }
        return lal;
        
    }
};