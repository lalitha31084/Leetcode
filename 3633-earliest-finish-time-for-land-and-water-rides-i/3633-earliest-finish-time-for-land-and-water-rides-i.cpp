class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime,vector<int>& landDuration,
    vector<int>& waterStartTime, vector<int>& waterDuration) {

        int n = landStartTime.size();
        int m = waterStartTime.size();
        int res = INT_MAX;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {

                int l1 = landStartTime[i] + landDuration[i];
                int l2 = max(l1, waterStartTime[j]) + waterDuration[j];

                int w1 = waterStartTime[j] + waterDuration[j];
                int w2 = max(w1, landStartTime[i]) + landDuration[i];

                res = min(res, min(l2, w2));
            }
        }

        return res;
    }
};