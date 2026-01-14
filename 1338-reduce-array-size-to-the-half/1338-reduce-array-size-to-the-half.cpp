class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n=arr.size();
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        vector<int>res;
        for(auto i:mp){
            res.push_back(i.second);
        }
        sort(res.rbegin(),res.rend());

        int r = 0, ans = 0;
        for (int i : res) {
            r += i;
            ans++;
            if (r >= arr.size() / 2)
                break;
        }
        return ans;
        
    }
};