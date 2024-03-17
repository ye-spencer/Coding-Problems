class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        int furthest = nums[0];
        int last = nums.size() - 1;
        for (int i = 0; i <= last; ++i)
        {
            if (furthest >= last) return true;

            if (nums[i] == 0 && furthest == i) return false;

            furthest = max(furthest, nums.at(i) + i);
        }
        return false;
    }
};
