class Solution {
public:
    int maxScore(string s) {
        int o=0,z=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            o++;
        }
        int ans=0;
        int maxx=0;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]=='0')
            z++;
            else if(s[i]=='1')
            o--;
            ans=(z+o);
            maxx=max(maxx,ans);
        }
        return maxx;
    }
};