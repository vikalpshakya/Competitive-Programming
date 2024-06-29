#include <vector>
using namespace std;
typedef long long ll;

const ll MOD = 1e9 + 7; // Define the modulus
const int MAX = 1e6; // Define the maximum value of n

// Time Complexity: O(MAX+log(MOD))

vector<ll> fact(MAX + 1), inv_fact(MAX + 1);

void factorials() {
    fact[0] = 1;
    for (ll i = 1; i <= MAX; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
/*

  1 / r! = inv(1) * inv(2) * inv(3) *.... inv(r-1) * inv(r)
  where inv(i) = 1/ i;
  
  (1 / r!) % MOD = (inv(1) * inv(2) * inv(3) *.... inv(r-1) * inv(r))%MOD
  =>  (inv(1) %MOD * inv(2) %MOD * inv(3) %MOD *.... inv(r-1) %MOD * inv(r) %MOD ) %MOD
  
  If I could somehow compute inv(i) % M, then its easy to compute (1 / r!) % M
  
  */

  
    inv_fact[MAX] = bin_pow(fact[MAX], MOD - 2, MOD); // Using Fermat's Little Theorem for modular inversion
    for (ll i = MAX - 1; i >= 0; i--) {
        inv_fact[i] = (inv_fact[i + 1] * (i + 1)) % MOD;
    }
}

// Binary exponentiation
ll bin_pow(ll base, ll exp, ll mod) {
    ll result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

// nCr calculation using precomputed factorials
ll ncr(int n, int k) {
    if (k > n) return 0;
    return (fact[n] * ((inv_fact[k] * inv_fact[n - k]) % MOD)) % MOD;
}




// ----------//
/* 

Multiplication for Large 'r'
Efficient multiplication technique for cases when 'r' < 1e6.

ll multiplication(int n, int r) {
    ll result = 1;
    for (int i = 0; i < r; i++) {
        result = (result * (n - i)) % MOD;
        result = (result * bin_pow(i + 1, MOD - 2, MOD)) % MOD; // Using modular inverse
    }
    return result;
}

*/

