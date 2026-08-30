class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mn=nums[0],mx=nums[0],cmx=0,cmn=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>mx){
                mx=nums[i];
                cmx=i;
            }
            else if(nums[i]<mn){
                mn=nums[i];
                cmn=i;
            }
        }
        int a=cmn+1;
        int b=nums.size()-cmn;
        int c=cmx+1;
        int d=nums.size()-cmx;
        
        if(cmx<cmn)
            return min(a,min(d,b+c));
        else
            return min(c,min(b,a+d));
    }
};