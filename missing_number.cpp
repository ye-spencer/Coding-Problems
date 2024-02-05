class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        const size_t len = nums.size();
        const int expected_sum = (len * (len + 1) / 2);
        int actual_sum = 0;

        for (size_t i = 0; i < len; i++)
        {
            actual_sum += nums.at(i);
        }
        return expected_sum - actual_sum;
    }
};