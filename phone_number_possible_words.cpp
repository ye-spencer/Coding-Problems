    void possibleWordsRecur(int a[], int N, int i, string curr, vector<string>& res)
    {
        if (i == N)
        {
            res.push_back(curr);
            return;
        }
        switch(a[i])
        {
            case 2:
                possibleWordsRecur(a, N, i + 1, curr + "a", res);
                possibleWordsRecur(a, N, i + 1, curr + "b", res);
                possibleWordsRecur(a, N, i + 1, curr + "c", res);
                break;
            case 3:
                possibleWordsRecur(a, N, i + 1, curr + "d", res);
                possibleWordsRecur(a, N, i + 1, curr + "e", res);
                possibleWordsRecur(a, N, i + 1, curr + "f", res);
                break;
            case 4:
                possibleWordsRecur(a, N, i + 1, curr + "g", res);
                possibleWordsRecur(a, N, i + 1, curr + "h", res);
                possibleWordsRecur(a, N, i + 1, curr + "i", res);
                break;
            case 5:
                possibleWordsRecur(a, N, i + 1, curr + "j", res);
                possibleWordsRecur(a, N, i + 1, curr + "k", res);
                possibleWordsRecur(a, N, i + 1, curr + "l", res);
                break;
            case 6:
                possibleWordsRecur(a, N, i + 1, curr + "m", res);
                possibleWordsRecur(a, N, i + 1, curr + "n", res);
                possibleWordsRecur(a, N, i + 1, curr + "o", res);
                break;
            case 7:
                possibleWordsRecur(a, N, i + 1, curr + "p", res);
                possibleWordsRecur(a, N, i + 1, curr + "q", res);
                possibleWordsRecur(a, N, i + 1, curr + "r", res);
                possibleWordsRecur(a, N, i + 1, curr + "s", res);
                break;
            case 8:
                possibleWordsRecur(a, N, i + 1, curr + "t", res);
                possibleWordsRecur(a, N, i + 1, curr + "u", res);
                possibleWordsRecur(a, N, i + 1, curr + "v", res);
                break;
            case 9:
                possibleWordsRecur(a, N, i + 1, curr + "w", res);
                possibleWordsRecur(a, N, i + 1, curr + "x", res);
                possibleWordsRecur(a, N, i + 1, curr + "y", res);
                possibleWordsRecur(a, N, i + 1, curr + "z", res);
                break;
        }
    }
    //Function to find list of all words possible by pressing given numbers.
    vector<string> possibleWords(int a[], int N)
    {
        vector<string> res;
        possibleWordsRecur(a, N, 0, "", res);
        return res;
    }