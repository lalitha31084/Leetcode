class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        map<int,int> mp;
        for (int num : nums) {
            mp[num]++;
        }
        vector<int> res;
        for (auto &p : mp) {
            if (p.second == 2) {
                res.push_back(p.first);
            }
        }

        return res;
    }
};
