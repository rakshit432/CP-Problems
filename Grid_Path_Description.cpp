#include <bits/stdc++.h>
using namespace std;

string s;
int ans = 0;
bool grid[7][7];

void dfs(int x, int y, int i)
{
   
    if (x == 6 && y == 0)
    {
        if (i == 48) ans++;
        return;
    }

    if (i == 48) return;

    if ((x > 0 && x < 6) &&
        !grid[x-1][y] && !grid[x+1][y] &&
        (y == 0 || grid[x][y-1]) &&
        (y == 6 || grid[x][y+1]))
        return;

    if ((y > 0 && y < 6) &&
        !grid[x][y-1] && !grid[x][y+1] &&
        (x == 0 || grid[x-1][y]) &&
        (x == 6 || grid[x+1][y]))
        return;

    grid[x][y] = true;

    if ((s[i] == '?' || s[i] == 'D') && x + 1 < 7 && !grid[x+1][y])
        dfs(x + 1, y, i + 1);

    if ((s[i] == '?' || s[i] == 'U') && x - 1 >= 0 && !grid[x-1][y])
        dfs(x - 1, y, i + 1);

    if ((s[i] == '?' || s[i] == 'R') && y + 1 < 7 && !grid[x][y+1])
        dfs(x, y + 1, i + 1);

    if ((s[i] == '?' || s[i] == 'L') && y - 1 >= 0 && !grid[x][y-1])
        dfs(x, y - 1, i + 1);

    grid[x][y] = false;
}


int main()
{
    cin >> s;
    dfs(0, 0, 0);
    cout << ans << endl;
}