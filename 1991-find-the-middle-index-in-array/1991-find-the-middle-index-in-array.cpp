class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int t=0;
        for(int i=0;i<nums.size();i++){
            t+=nums[i];
        }
        int ls=0;
        for(int i=0;i<nums.size();i++){
            int  rs=t-nums[i]-ls;
            if(ls==rs){
                return i;
            }
           ls+=nums[i];
        }
        return -1;
    }
};