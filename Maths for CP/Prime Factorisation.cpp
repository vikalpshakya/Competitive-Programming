/* Prime factorisation of a number 
    Time complexity: O(sqrt(n))
*/


#include<bits/stdc++.h> 
using namespace std;

vector<int>primeFactors;  // for storing the prime factors of the number

void primeFactorisation(int n) {
    for(int i = 2; i*i <= n; i++) {
        while(n%i == 0) {
            primeFactors.push_back(i);
            n /= i;
        }
    }

    if(n != 1) primeFactors.push_back(n);

}

int main() {
    int n; cin >> n;
    primeFactorisation(n);
    for(auto i: primeFactors) cout << i << " ";
}



