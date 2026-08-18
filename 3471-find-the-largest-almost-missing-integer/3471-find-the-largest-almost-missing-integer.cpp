class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        unordered_map<int,int>c;
        for(int i=0;i<k;i++){
            mp[nums[i]]++;
        }
        for(auto& i:mp){
                c[i.first]++;
        }
        int l=0,r=k;
        while(r<n){
            mp[nums[l]]--;
            mp[nums[r]]++;
            l++;
            r++;

            for (auto& i : mp) {
                if (i.second > 0) 
                    c[i.first]++;
                
            }
       }
       int mx=-1;
       for(auto& i : c) {
            if(i.second == 1) 
                mx = max(mx, i.first);
            
        }
       return mx;
       
    }
};