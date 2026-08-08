class Solution {
public:
    int trap(vector<int>& height) {
        int lm,rm,t=0;
        int l=0,r=height.size()-1;
        while(l<r){
            if(height[l]<=height[r]){
                if(lm>height[l])
                    t+= lm-height[l];
                else
                    lm=height[l];
                
                l++;
            }
            else{
                if(rm>height[r])
                    t+=rm-height[r];
                else
                    rm=height[r];
                r--;
            }
        }
        return t;
    }
};