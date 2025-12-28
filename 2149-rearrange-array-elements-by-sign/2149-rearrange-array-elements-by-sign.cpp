class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos,neg;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>0)
                pos.push_back(nums[i]);
            else 
                neg.push_back(nums[i]);   
        }
        vector<int>res;
        for(int i=0;i<pos.size();i++){
          res.push_back(pos[i]);
            res.push_back(neg[i]);
        }
        return res;
    }
};