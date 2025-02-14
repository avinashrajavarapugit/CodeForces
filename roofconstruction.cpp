#include <iostream>
using namespace std;

int main() {
    long t;
    cin >> t;
    while (t--) {
        long n;
        cin >> n;
        long k = 0;
        while ((1 << (k + 1)) <= n - 1) ++k;
        for (long p = (1 << k) - 1; p >= 0; --p) cout << p << " ";
        for (long p = (1 << k); p < n; ++p) cout << p << " ";
        cout << "\n";
    }
}
