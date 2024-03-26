class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        return bsearch(0, nums.size() - 1, nums, target);
    }
    int bsearch(int start, int end, vector<int>& nums, int target)
    {
        if (start > end) return -1;
        int mid = (end + start) / 2;
        int val = nums.at(mid);
        if (val > target)
            return bsearch(start, mid - 1, nums, target);
        else if (val < target)
            return bsearch(mid + 1, end, nums, target);
        return mid;
    }
};