#include <iostream>
#include <vector>
#include <unordered_map>
#define ll long long
using namespace std;

const int MOD = 998244353;

void solve_test_case() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    unordered_map<int, int> curr1, curr2;
    curr1[0] = 1;
    for (ll i = 0; i < n; i++) {
        unordered_map<int, int> next1, next2;
        if ((curr1[a[i]] + curr2[a[i]]) % MOD > 0){
            next1[a[i]] = (curr1[a[i]] + curr2[a[i]]) % MOD;
        }

        for(const auto & [it, it1]: curr1){
            next2[it + 1] = (next2[it1 + 1] + it1) % MOD;
        }
        curr1 = next1;
        curr2 = next2;
    }
    int result = 0;
    for(const auto & [it, it1]: curr1){
        result = (result + it1) % MOD;
    }
    for(const auto & [it, it1]: curr2){
        result = (result + it1) % MOD;
    }
    cout << result << endl;

}
int main() {

    int t;
    cin >> t;
    while (t--) {
        solve_test_case();
    }

    return 0;
}
