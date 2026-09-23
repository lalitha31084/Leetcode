class Solution {
public:
    int countSubstrings(string s) {
        int n=s.size();
        int c=0;
        for(int l=0;l<n;l++){
            string res="";
            for(int r=l;r<n;r++){
                res.push_back(s[r]);
                string rev=res;
                reverse(rev.begin(),rev.end());
                if(rev==res)c++;

            }
        }
        return c;
        
    }
};