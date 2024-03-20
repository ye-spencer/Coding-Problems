class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int size = nums.size();
        int postfix[size]; //index i is product of all the numbers after i
        int product = 1;
        for (int i = size - 1; i >= 0; i--)
        {
            postfix[i] = product;
            product *= nums.at(i);
        }
        product = 1;
        for (int i = 0; i < size; i++)
        {
            int temp = nums.at(i);
            nums.at(i) = product * postfix[i];
            product *= temp;
        }  
        return nums;

    }
};