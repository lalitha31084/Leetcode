class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char,int>mp1,mp2;
        for(char ch:s) mp1[ch]++;
        for(char ch:target)mp2[ch]++;

        int res=INT_MAX;
        for(auto i:mp2){
            res=min(res,mp1[i.first]/i.second);
            
        }
        return res;
    }
};