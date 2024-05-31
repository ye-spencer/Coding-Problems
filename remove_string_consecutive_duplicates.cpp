    string removeConsecutiveDuplicates(string s)
    {
        if (s.length() < 1) return s;
        
        string res = s.substr(0, 1);
        int curr_last = 0;
        int length = s.length();
        for (int i = 1; i < length; i++)
        {
            if (s.at(i) != res.at(curr_last))
            {
                res += s.at(i);
                curr_last++;
            }
        }
        return res;
    }