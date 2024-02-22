class Solution {
public:
    int lengthOfLongestSubstring(string s)
    {
        int result = 0;
        int left = 0;
        int right = 0;
        int length = s.length();
        unordered_set<int> set;
        while (right < length)
        {
            char ch = s.at(right);
            while (set.count(ch) != 0)
            {
                set.erase(s.at(left));
                left++;
            }
            set.insert(ch);
            result = max(result, ++right - left);
            
        }
        return result;
    }
};