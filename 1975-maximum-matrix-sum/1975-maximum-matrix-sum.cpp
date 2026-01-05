class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        long long s = 0;
        int nc = 0;
        int minAbs = INT_MAX;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int val = matrix[i][j];

                if (val < 0) nc++;

                s += abs(val);
                minAbs = min(minAbs, abs(val));
            }
        }

        if (nc % 2 == 1) {
            s -= 2 * minAbs;
        }

        return s;
    }
};
