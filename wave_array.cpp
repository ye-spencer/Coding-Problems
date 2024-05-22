    void convertToWave(int n, vector<int>& arr)
    {
        for (int i = 0; i < n - 1; i += 2)
        {
            swap(arr.at(i), arr.at(i + 1));
        }
        
    }