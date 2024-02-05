class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        for (size_t i = 0; i < nums.size() - 1; i__)
        {
            if (nums.at(i) == nums.at(i + 1))
            {
                return true;
            }
        }
        return false;
    }
};