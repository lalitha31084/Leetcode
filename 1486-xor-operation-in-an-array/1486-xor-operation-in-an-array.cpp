class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int>res;
        for(int i=start;i<start+2*n;i+=2){
            res.push_back(i);
        }
        int ans=res[0];
        for(int i=1;i<res.size();i++){
            ans^=res[i];
        }
        return ans;
        
    }
};