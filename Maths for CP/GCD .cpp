
#include<bits/stdc++.h> 
using namespace std;

//  Time complexity : O(min(a,b)) 

int gcd1(int a, int b) {
    int ans = 1;
    for(int i = 1; i <= min(a,b); i++) {
        if(a%i == 0 && b%i == 0)
            ans = i;
    }
    return ans;
}

// optimal : using Euclids algo
// Time complexity: O(log(max(a,b)))

int gcd2(int a, int b) {
    if(b < a) return gcd2(b,a);
    if(a == 0) return b;
    return gcd2(a,b%a);
}

int main() {
    int a , b;
    cin >> a >> b;
    cout << gcd2(a,b) << endl;
}

