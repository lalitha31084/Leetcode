class Solution {
public:
    int maxOperations(string s) {
        int n = s.size();
        long long ops = 0;
        int zeroBlocks = 0;
        bool inZeroBlock = false;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '0') {
                if (!inZeroBlock) {
                    zeroBlocks++;     
                    inZeroBlock = true;
                }
            } else {
                ops += zeroBlocks;     
                inZeroBlock = false;
            }
        }
        return ops;
    }
};
