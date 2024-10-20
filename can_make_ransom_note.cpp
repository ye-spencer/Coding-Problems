class Solution {
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        unordered_map<char, int> map;
        for (int i = 0; i < magazine.length(); i++)
        {
            map[magazine.at(i)]++;
        }
        for (int i = 0; i < ransomNote.length(); i++)
        {
            char ch = ransomNote.at(i);
            if (map[ch] == 0) return false;
            else
            {
                map[ch]--;
            }
        }
        return true;
    }
};