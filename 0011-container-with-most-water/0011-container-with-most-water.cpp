class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0,r=height.size()-1;
        int maxar=INT_MIN;
        while(l<r){
            int d=r-l;
            int minh=min(height[l],height[r]);
            maxar=max(maxar,(minh*d));
            if(height[l]<height[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return maxar;
        
    }
};