stack<int> _push(int arr[],int n)
{
    stack<int> res;
    res.push(arr[0]);
    for (int i = 1; i < n; i++)
    {
        int min = std::min(arr[i], res.top());
        res.push(min);
    }
    return res;
}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>s)
{
    while(!s.empty())
    {
        std::cout << s.top() << " ";
        s.pop();
    }
}