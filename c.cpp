#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve() {
        int t;
        cin >> t;
        while (t--) {
            int n, k;
            cin >> n >> k;
            vector<int> x(n);
            unordered_map<int, int> freq;

            for (int i = 0; i < n; i++) {
                cin >> x[i];
                freq[x[i]]++;
            }

            int score = 0;
            for (auto &[num, count] : freq) {
                int complement = k - num;
                if (freq.find(complement) != freq.end()) {
                    if (num == complement) {
                        score += count / 2;
                    } else {
                        int pairs = min(count, freq[complement]);
                        score += pairs;
                        freq[complement] -= pairs;
                        freq[num] -= pairs;
                    }
                }
            }

            cout << score << "\n";
        }
    }
};

int main() {
    Solution obj;
    obj.solve();
    return 0;
}
