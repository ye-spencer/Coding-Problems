class Solution {
public:
    vector<int> countBits(int n) 
    {
        vector<int> temp;
        //0, 1, 1, 2, 1, 2, 2, 3, 1, 2, 2, 3, 2, 3, 3, 4, 2, 3, 3, 4, 
        for (size_t i = 0; i <= n; i++)
        {
            size_t count = 0;
            size_t shift = i;
            while(shift)
            {
                count += (shift & 1U);
                shift = shift >> 1;
            }
            temp.push_back(count);
        }
        return temp;
    }
};