#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<vector<char>> grid(n, vector<char>(n));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> grid[i][j];
            }
        }
        long res = 0;
        for(long row = 0; row < n / 2; row++){
            for(long col = row; col < n - 1 - row; col++){
                char a = grid[row][col];
                char b = grid[col][n - 1 - row];
                char c = grid[n - 1 - row][n - 1 - col];
                char d = grid[n - 1 - col][row];
                int cntZ = (a == '1') + (b == '1') + (c == '1') + (d == '1');
                int cntA = (a == '0') + (b == '0') + (c == '0') + (d == '0');
                res += min(cntZ, cntA);
            }
        }
        cout << res << endl;
    }
}
