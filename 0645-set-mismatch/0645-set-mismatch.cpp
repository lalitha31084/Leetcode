class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_set<int>s;
        int d,m;
        for(int i=0;i<nums.size();i++){
            if(s.count(nums[i])) d=nums[i];
            else s.insert(nums[i]);   
        }
        for(int i=1;i<=nums.size();i++){
            if(!s.count(i)) m=i;
        }

     return {d,m};
        
    }
};