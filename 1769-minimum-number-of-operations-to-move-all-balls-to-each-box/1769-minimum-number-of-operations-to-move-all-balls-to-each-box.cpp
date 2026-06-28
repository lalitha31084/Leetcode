class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size();
        vector<int>res(n);
        for(int i=0;i<n;i++){
            int m=0;
            for(int j=0;j<n;j++){
                if(boxes[j]=='1') m+=abs(i-j);
            }
            res[i]=m;
        }
        return res;
        
    }
};