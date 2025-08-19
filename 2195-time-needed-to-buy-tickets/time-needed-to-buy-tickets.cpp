class Solution {
public:
    int timeRequiredToBuy(vector<int>& t, int k) {
        // queue<int>q;
        // for(int i=0;i<t.size();i++){
        //     q.push(i);
        // }
        // int tc=0;
        // while(!q.empty()){
        //     int p=q.front();
        //     q.pop();
        //     tc++;
        //     t[p]--;
        //     if(t[p]>0 )q.push(p);
        //     if (p== k && t[p] == 0) return tc;
        // }
        // return tc;
        int i=0;
        int c=0;
        while(t[k]){
            if(t[i]>0){
                    c++;
                     t[i]--;
            }
            i++;
            if(i==t.size())
            i=0;
           

        }
        return c;
    } 
};