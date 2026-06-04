class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int ans = 0;

        for (int j = num1; j <= num2; j++) {
            vector<int> res;
            int x = j;

            while (x > 0) {
                res.push_back(x % 10);
                x /= 10;
            }

            reverse(res.begin(), res.end());

            for (int i = 1; i < res.size() - 1; i++) {
                if ((res[i] > res[i - 1] && res[i] > res[i + 1]) ||
                    (res[i] < res[i - 1] && res[i] < res[i + 1])) {
                    ans++;
                }
            }
        }

        return ans;
    }
};