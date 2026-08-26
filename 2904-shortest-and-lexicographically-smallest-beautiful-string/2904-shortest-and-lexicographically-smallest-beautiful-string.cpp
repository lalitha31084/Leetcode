class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string ans = "";
        int n = s.size();

        for (int i = 0; i < n; i++) {
            int c = 0;

            for (int j = i; j < n; j++) {
                if (s[j] == '1')
                    c++;

                if (c == k) {
                    string cur = s.substr(i, j - i + 1);

                    if (ans == "" || cur.size() < ans.size() ||
                        (cur.size() == ans.size() && cur < ans)) {
                        ans = cur;
                    }
                    break;
                }
            }
        }
        return ans;
    }
};