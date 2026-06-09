#include <bits/stdc++.h>
using namespace std;

int func(vector<vector<char>>& v, int r)
{
    // base case
    if (r == 8)
    {
        return 1;
    }

    int ans = 0;

    for (int c = 0; c < 8; c++)
    {
        // skip blocked cell
        if (v[r][c] != '.') continue;

        int nr = r, nc = c;

        // upward check
        bool safe = true;
        for (int i = r - 1; i >= 0; i--)
        {
            if (v[i][c] == 'Q')
            {
                safe = false;
                break;
            }
        }

        // left diagonal
        for (int i = r - 1, j = c - 1; i >= 0 && j >= 0; i--, j--)
        {
            if (v[i][j] == 'Q')
            {
                safe = false;
                break;
            }
        }

        // right diagonal
        for (int i = r - 1, j = c + 1; i >= 0 && j < 8; i--, j++)
        {
            if (v[i][j] == 'Q')
            {
                safe = false;
                break;
            }
        }

        if (!safe) continue;

        // place queen
        v[r][c] = 'Q';

        // recurse
        ans += func(v, r + 1);

        // backtrack
        v[r][c] = '.';
    }

    return ans;
}

int main()
{
    vector<vector<char>> v(8, vector<char>(8));

    for (auto &i : v)
        for (auto &j : i)
            cin >> j;

    cout << func(v, 0) << endl;
}