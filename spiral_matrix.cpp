class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        vector<int> result;
        int rows, m, cols, n;
        rows = m = matrix.size();
        cols = n = matrix.at(0).size();
        int cycles = 0;
        std::cout << m << " | " << n << std::endl;
        while (m >= 2 && n >= 2)
        {
            for (int i = cycles; i < cols - cycles; i++)
            {
                result.push_back(matrix.at(cycles).at(i));
            }
            for (int i = cycles + 1; i < rows - cycles; i++)
            {
                result.push_back(matrix.at(i).at(cols - cycles - 1));
            }
            for (int i = cols - cycles - 2; i >= cycles; i--)
            {
                result.push_back(matrix.at(rows - cycles - 1).at(i));
            }
            for (int i = rows - cycles - 2; i > cycles; i--)
            {
                result.push_back(matrix.at(i).at(cycles));
            }
            cycles++;
            m -= 2;
            n -= 2;
        }
        if (n != 0 && m != 0)
        {
            if (rows <= cols)
            {
                for (int i = cycles; i < cols - cycles; i++)
                {
                    result.push_back(matrix.at(cycles).at(i));
                }
            }
            else
            {
                for (int i = cycles; i < rows - cycles; i++)
                {
                    result.push_back(matrix.at(i).at(cols - cycles - 1));
                }
            }
        }

        //need to finish the boxes after finishing all full rects

        return result;
           
    }
};