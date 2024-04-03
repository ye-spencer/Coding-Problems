class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) 
    {
        int size = cost.size();
        int * prev = new int[size + 1];
        for (int i = 0; i < size + 1; i++)
        {
            prev[i] = -1;
        }
        prev[0] = cost.at(0);
        prev[1] = cost.at(1);
        return min(minCostStair(cost, prev, size - 1), minCostStair(cost, prev, size - 2));
    }
    int minCostStair(vector<int>& cost, int * prev, int stair)
    {
        if (prev[stair] != -1)
        {
            return prev[stair];
        }
        return prev[stair] = cost.at(stair) + min(minCostStair(cost, prev, stair - 1), minCostStair(cost, prev, stair - 2));

    }
};