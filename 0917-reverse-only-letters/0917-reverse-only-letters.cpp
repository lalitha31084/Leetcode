class Solution {
public:
    string reverseOnlyLetters(string s) {
        int n = s.size();
        vector<char> v;
        for (char x : s) {
            if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z')) {
                v.push_back(x);
            }
        }
        reverse(v.begin(), v.end());

        int j = 0;
        for (int i = 0; i < n; i++) {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
                s[i] = v[j++];
            }
        }
        return s;
    }
};