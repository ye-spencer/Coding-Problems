class Solution 
{
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) 
    {
        if (groupSize == 1) return true;
        vector<pair<int, int>> straights;
        sort(hand.begin(), hand.end());
        for (int card : hand)
        {
            bool found = false;
            for (int i = 0; i < straights.size(); i++)
            {
                if (card == straights.at(i).first)
                {
                    straights.at(i).second--;
                    straights.at(i).first++;
                    if (straights.at(i).second == 0)
                    {
                        straights.erase(straights.begin() + i);
                    }
                    found = true;
                    break;
                }
            }
            // IF NOT FOUND
            if (!found)
            {
                straights.push_back(make_pair(card + 1, groupSize - 1));
            }
        }
        return (straights.size() == 0);
    }
};