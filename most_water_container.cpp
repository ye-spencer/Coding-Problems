class Solution 
{
public:
    int maxArea(vector<int>& height)
    {
        int result = -1;
        int start = 0;
        int end = height.size() - 1;
        while (start < end)
        {
            
            if (height.at(start) < height.at(end))
            {
                result = max(result, (end - start) * height.at(start));
                start++;
            }
            else
            {
                result = max(result, (end - start) * height.at(end));
                end--;
            }
        }
        return result;
    }
};