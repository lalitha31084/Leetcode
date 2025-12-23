class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int rs=0;
        for(int x:nums) rs+=x;

        int i=0,ls=0;
        while(i<n){
            rs-=nums[i];
            if(ls==rs) return i;
            ls+=nums[i];
            i++;
        }
        return -1; 
     
    }
};