class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        string res="";
        sort(strs.begin(),strs.end());
        string f=strs[0];
        string e=strs[n-1];
        for (int i = 0; i < f.size(); i++) {
            if (f[i] == e[i])
                res.push_back(f[i]);
            else
                break;
        }
        return res;
        
    }
};