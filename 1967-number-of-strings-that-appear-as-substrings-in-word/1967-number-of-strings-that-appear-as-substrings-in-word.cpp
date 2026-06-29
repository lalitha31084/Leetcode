class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int c=0;
        int n=patterns.size();
        for(int i=0;i<n;i++){
            if(word.find(patterns[i])!=-1) c++;
        }
        return c;
    }
};