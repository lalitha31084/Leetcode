class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> temp = arr;
        sort(temp.begin(), temp.end());

        unordered_map<int, int> mp;
        int r= 1;

        for (int i = 0; i < temp.size(); i++) {
            if (mp.count(temp[i]) == 0)
                mp[temp[i]] = r++;
        }

        for (int i = 0; i < arr.size(); i++)
            arr[i] = mp[arr[i]];

        return arr;
    }
};