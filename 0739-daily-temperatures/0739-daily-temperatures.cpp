class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        int n=t.size();
        stack<int>s;
        vector<int>res(n,0);
        for(int i=0;i<n;i++){
            while(!s.empty() && t[s.top()]<t[i]){
                res[s.top()]=i-s.top();
                s.pop();
                
            }

            s.push(i);

        }
        return res;
        
    }
};