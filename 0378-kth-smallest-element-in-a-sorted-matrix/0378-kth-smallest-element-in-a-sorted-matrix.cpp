class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int>pq;
        for(auto& r:matrix){
            for(int i:r){
            pq.push(i);
            if(pq.size()>k)
                pq.pop();
            }
        }
        return pq.top();
    }
};