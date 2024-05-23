    vector<int> pattern(int N)
    {
        vector<int> res;
        patt_add(N, res);
        return res;
    }
    
    void patt_add(int N, vector<int>& arr)
    {
        if (N <= 0)
        {
            arr.push_back(N);
            return;
        }
        arr.push_back(N);
        patt_add(N - 5, arr);
        arr.push_back(N);
    }