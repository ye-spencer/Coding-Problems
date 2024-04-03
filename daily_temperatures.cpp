class Solution 
{
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) 
    {
        int * temps = new int[71];
        for (int x = 0; x <= 70; x++)
        {
            temps[x] = 0;
        }
        int temp = 0;
        for (int i = temperatures.size() - 1; i >= 0; i--)
        {
            temp = temperatures.at(i);
            for (int j = 0; j < temp - 30; j++)
            {
                temps[j] = i;
            }
            temperatures.at(i) = max(temps[temp - 30] - i, 0);
        }
        return temperatures;
    }
};