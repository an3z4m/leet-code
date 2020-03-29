class Solution {
public:
    int numTeams(vector<int>& rating) {
        int numberOfTeams = 0;
       for(unsigned int i=0; i<rating.size(); i++)
            for(unsigned int j=i+1; j<rating.size(); j++)
                for(unsigned int k=j+1; k<rating.size(); k++)
                    if((rating[i]<rating[j] && rating[j]<rating[k]) || (rating[k]<rating[j] && rating[j]<rating[i]))
                        numberOfTeams++;
        return numberOfTeams;
    };
};
