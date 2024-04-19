class Solution 
{
public:
    int rob(vector<int>& nums) 
    {
        vector<int> sums;
        for (int i = 0; i < nums.size(); i++)
        {
            sums.push_back(-1);
        }    
        return max(robs(nums, sums, nums.size() - 1), robs(nums, sums, nums.size() - 2));
    }
    int robs(vector<int>& nums, vector<int>& results, int house)
    {
        if (house < 0) return 0;
        if (house <= 1) return nums[house];

        if (results[house] == -1)
        {
            results[house] = max(robs(nums, results, house - 2), robs(nums, results, house - 3)) + nums[house];
        }
        return results[house];
    }
};