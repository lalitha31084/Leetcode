class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int l=0,sum=0,maxl=0;
        int n=s.size();
        for(int r=0;r<n;r++){
            sum+=abs(s[r]-t[r]);
            while(sum>maxCost){
                sum-=abs(s[l]-t[l]);
                l++;
            }
            maxl=max(maxl,r-l+1);

        }
        return maxl;


        
    }
};