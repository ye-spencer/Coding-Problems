    string removePair(string s)
    {
        if (s.length() < 2) return s;
        
        string res;
        deque<char> stack;
        stack.push_back(s.at(0));
        int length = s.length();
        for (int i = 1; i < length; i++)
        {
            if (stack.empty() || s.at(i) != stack.back())
            {
                stack.push_back(s.at(i));
            }
            else
            {
                stack.pop_back();
            }
        }
        while(!stack.empty())
        {
            res += stack.front();
            stack.pop_front();
        }
        return res;
    }