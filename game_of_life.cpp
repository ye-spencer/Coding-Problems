#include <vector>

class Solution {
public:
    void gameOfLife(std::vector<std::vector<int>>& board) 
    {
        int arr[board.size()][(board.at(0)).size()];

        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < (board.at(i)).size(); j++)
            {
                if (getValue(board, i, j) == 1) // if alive
                {
                    int neighbors = numNeighbors(board, i, j);
                    if (neighbors == 2 || neighbors == 3)
                    {
                        arr[i][j] = 1;
                    }
                    else
                    {
                        arr[i][j] = 0;
                    }
                }
                else
                {
                    if (numNeighbors(board, i, j) == 3)
                    {
                        arr[i][j] = 1;
                    }
                    else
                    {
                        arr[i][j] = 0;
                    }
                }
            }
        }
        for (int row = 0; row < board.size(); row++)
        {
            board.at(row).clear();
            for (int col = 0; col  < sizeof(arr[0])/sizeof(int); col++)
            {
                (board.at(row)).push_back(arr[row][col]);
            }
        }
    }
private:
    int numNeighbors(vector<vector<int>>& board, int row, int col)
    {
        int total = 0;
        total += getValue(board, row - 1, col + 1);
        total += getValue(board, row - 1, col);
        total += getValue(board, row - 1, col - 1);
        total += getValue(board, row, col + 1);
        total += getValue(board, row, col - 1);
        total += getValue(board, row + 1, col + 1);
        total += getValue(board, row + 1, col);
        total += getValue(board, row + 1, col - 1);
        return total;
    }

    int getValue(vector<vector<int>>& board, int row, int col)
    {
        if (row >= 0 && row < board.size() && col >= 0 && col < board[0].size())
        {
            return (board.at(row)).at(col);
        }
        return 0;
    }
};