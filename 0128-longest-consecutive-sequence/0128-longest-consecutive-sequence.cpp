class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;

        set<int> s(nums.begin(), nums.end());
        vector<int> v(s.begin(), s.end());
        int c = 0, mc = 0;
        for(int i = 0; i < v.size()-1; i++) {
            if(v[i + 1] - v[i] == 1) {
                c++;
                mc = max(mc, c);
            } 
            else {
                c = 0;
            }
        }

        return mc + 1;
    }
};