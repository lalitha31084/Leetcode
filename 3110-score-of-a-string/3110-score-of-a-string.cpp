class Solution {
public:
    int scoreOfString(string s) {
        int n=s.size()-1;
        int c=0;
        for(int i=0;i<n;i++){
            c+=abs(s[i]-s[i+1]);
        }
        return c;
        
    }
};