class Solution {
public:
    string addSpaces(string s, vector<int>& sp) {
        string res = "";
        int j = 0;
        for (int i = 0; i < s.size(); i++) {
          
            if (j < sp.size() && i == sp[j]) {
                res += ' ';
                j++;
            }
            res += s[i];
        }
        return res;
    }
};

