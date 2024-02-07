class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        for (size_t i = 0; i < nums.size() - 2; i++)
        {
            int numOne = nums.at(i);
            for (size_t j = i+1; j < nums.size() - 1; j++)
            {
                int numTwo = nums.at(j);
                if (find(nums.begin() + j + 1, nums.end(), 0 - numOne - numTwo) != nums.end())
                {
                    vector<int> temp({numOne, numTwo, 0 - numOne - numTwo});
                    if (find(result.begin(), result.end(), temp) == result.end())
                        result.push_back(temp);
                }
            }

        }   
        return result;
    
    }
};