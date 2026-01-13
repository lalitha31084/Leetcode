class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int d;
        int maxc=INT_MIN;
        for(auto i:mp){
            if(i.second>n/2){
                d=i.first;
                maxc=i.second;
                break;
            }
        }
        int lc=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]==d)
                lc++;
            int ls=i+1;
            int rs=n-ls;
            int rc=maxc-lc;

            if(lc>ls/2 && rc>rs/2)
               return i;
        }
        return -1; 
    }
};