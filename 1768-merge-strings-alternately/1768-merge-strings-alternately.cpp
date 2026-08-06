class Solution {
public:
    string mergeAlternately(string word1, string word2) {
       int i=0;
        string res="";
        for( i=0;i<min(word1.size(),word2.size());i++){
            res.push_back(word1[i]);
            res.push_back(word2[i]);
        }
        while(i<word1.size()){
            res.push_back(word1[i]);
            i++;
        }
        while(i<word2.size()){
            res.push_back(word2[i]);
            i++;
        }
        
        return res;
        
    }
};