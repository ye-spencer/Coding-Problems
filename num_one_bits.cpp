class Solution {
public:
    int hammingWeight(uint32_t n) 
    {
        int count = 0;
        for (size_t i = 0; i < 32; i++)
        {
            if (n & (1U << i))
            {
                count++;
            }
        }
        return count;
    }
};