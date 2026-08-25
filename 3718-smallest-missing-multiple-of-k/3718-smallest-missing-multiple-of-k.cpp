class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%k==0){
                res.push_back(nums[i]);
            }
        }
        int c=k;
        sort(res.begin(),res.end());
        for(int i=0;i<res.size();i++){
            if(c==res[i]){
                c+=k;
            }
            else if(c<res[i]){
                return c;
            }
        }
        return c;
    }
};