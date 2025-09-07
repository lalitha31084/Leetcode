class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> mn;
        int c = 1;
        int i = 0;

        while (mn.size() < k) {
            if (i < arr.size() && arr[i] == c) {
                i++;
            } else {
                mn.push_back(c);
            }
            c++;
        }

        return mn[k - 1];
    }
};
