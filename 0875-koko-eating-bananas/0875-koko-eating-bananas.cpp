class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int l = 1, r = *max_element(piles.begin(), piles.end());
        long long c = 0, mc = INT_MAX;
        while(l <= r) {
            int m = l + (r - l) / 2;
            c = 0;

            for(int i = 0; i < n; i++) {
                c += piles[i] / m;

                if(piles[i] % m != 0) {
                    c++;
                }
            }
            if(c <= h) {
                mc = m;
                r = m - 1;
            }
            else {
                l = m + 1;
            }
        }

        return mc;
    }
};