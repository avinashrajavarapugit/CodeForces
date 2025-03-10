#include <bits/stdc++.h>
#define ll long long int
#define nline '\n'
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    ll arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    ll count = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] & 1 and arr[i + 1] & 1)
            count++;

        if (!(arr[i] & 1) and !(arr[i + 1] & 1))
            count++;
    }

    cout << count << nline;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T = 1;
    cin >> T;
    while (T--) 
    {
        solve();
    }

}