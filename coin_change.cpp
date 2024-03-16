class Solution 
{
public:
    int coinChange(vector<int>& coins, int amount) 
    {
        if (!amount) return 0;

        int * arr = new int[amount + 1]; 
        for (int i = 0; i <= amount; i++)
        {
            arr[i] = 0;
        }
        return CC(coins, amount, arr);    
    }
    int CC(vector<int>& coins, int amount, int * arr)
    {
        if (arr[amount] != 0) return arr[amount];
        size_t least = 0;
        least--;

        for (int coin : coins)
        {
            if (amount - coin > 0)
            {
                int result = CC(coins, amount - coin, arr);
                if (result < least)
                {
                    least = result;
                }
            }
            if (amount == coin)
            {
                return arr[amount] = 1;
            }
        }
        if (++least == 0)
        {
            return arr[amount] = -1;
        }
        return arr[amount] = least;
    }
};