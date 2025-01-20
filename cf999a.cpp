// Source: Avinash
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int solve() {
        // code here
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        vector<long long> evens, odds;
    for(long long num : a) {
        if(num % 2 == 0) {
            evens.push_back(num);
        } else {
            odds.push_back(num);
        }
    }
    
    vector<long long> optimal;

    
    if(!evens.empty()){
        if (odds.empty()){
        return 1;
        }
        else{
        optimal.push_back(evens.back());
        evens.pop_back();
        while(!odds.empty()) {
            optimal.push_back(odds.back());
            odds.pop_back();
        }
        while (!evens.empty()){
            optimal.push_back(evens.back());
            evens.pop_back();
        }
        }
    }
    else{
        return odds.size() - 1;
    }
    int points = 0;
    long long s = 0;
    for(long long num : optimal) {
        s += num;
        if(s % 2 == 0) {
            points++;
            while(s % 2 == 0) {
                s /= 2;
            }
        }
    }
    
    return points;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        Solution obj;
        cout << obj.solve() << endl;
    }
    return 0;
}
