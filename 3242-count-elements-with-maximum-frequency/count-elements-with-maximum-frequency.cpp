class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>res;
        for(int i:nums){
          res[i]++;
        }
        int maxx=0;
        for(auto& i:res){
            maxx=max(maxx,i.second);
        }
        int c=0;
        for(auto& i:res){
            if(i.second==maxx) 
                c+=i.second;
        }
        return c;


        
    }
};