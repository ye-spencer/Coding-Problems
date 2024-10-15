class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        const int MAX_NUM = 10000;
        const int OFFSET = 10 * MAX_NUM;
        unordered_map<int, int> counts;

        for (int i = 0; i < nums.size(); i++)
        {
            counts[nums[i]]++;
        }

        priority_queue <int, vector<int>, greater<int>> most_frequent;
        auto iter = counts.begin();
        while (iter != counts.end())
        {
            most_frequent.push(iter->first + (OFFSET * iter->second));
            if (most_frequent.size() > k)
            {
                most_frequent.pop();
            }
            iter++;
        }
        vector<int> result;
        while (!most_frequent.empty())
        {
            int top = most_frequent.top() % OFFSET;
            if (top > MAX_NUM)
            {
                top -= OFFSET;
            }
            result.push_back(top);
            most_frequent.pop();
        }
        return result;
    }
};