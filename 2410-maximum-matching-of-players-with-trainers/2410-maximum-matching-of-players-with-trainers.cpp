class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());
        int ability = 0;
        int capacity = 0;
        int match = 0;
        while(ability < players.size() && capacity < trainers.size()) {
            if(players[ability] <= trainers[capacity]) {
                match++;
                ability++;
                capacity++;
            }
            else if(players[ability] > trainers[capacity]) capacity++;
            else ability++;
        }
        return match;
    }
};