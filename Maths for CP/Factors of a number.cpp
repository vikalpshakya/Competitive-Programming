#include <bits/stdc++.h>
using namespace std;

// Time complexity: O(sqrt(n))


vector<int>factors;

void findFactor(int n) {
    for(int i = 1; i *i <= n; i++) {
        if(n%i == 0) {
            factors.push_back(i);
            if(n/i != i) 
                factors.push_back(n/i);
        }
    }
    sort(factors.begin(),factors.end());
}

int main() {
    int n; cin >> n;
    findFactor(n);
    for(auto i : factors) cout << i << " ";
}

