class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        vector<string>res;
        map<string,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
         for (auto i : arr) {
            if (mp[i] == 1)
                res.push_back(i);    
        }
        if(k<=res.size())
             return res[k - 1]; 
        return "";
        
    }
};