class Solution {
public:
    int countStudents(vector<int>& st, vector<int>& sw) {
        queue<int>q;
        for(int s: st) q.push(s);
        int i=0, c=0;
        while(!q.empty() && q.size()>c){
            int p=q.front();
            q.pop();
            if(p==sw[i]){
                i++;
                c=0;
            }
            else{
                q.push(p);
                c++;
            }
        }
        return q.size();

        
    }
};