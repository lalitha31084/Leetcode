class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string res="";
        int l=0,r=0,c=0,mn=INT_MAX;
        while(r<s.size()){
            if(s[r]=='1'){
                c++;
            }
            while(c==k){
                while(s[l]=='0')
                    l++;
                string cur=s.substr(l,r-l+1);
                if (res == "" || cur.size() < res.size() ||
                    (cur.size() == res.size() && cur < res))
                    res = cur;
                if (s[l] == '1')
                    c--;
                l++;
            }
            r++;
        }
        return res;
        
    }
};