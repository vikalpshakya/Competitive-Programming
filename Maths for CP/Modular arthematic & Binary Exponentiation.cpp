
/*        MODULAR ARTHEMATIC 
    1. ( a + b ) % n = ( a % n + b % n ) % n 
    2. ( a * b ) % n = (a % n * b % n ) % n
    3. ( a - b ) % n = ((a % n - b % n) + n ) % n

*/

// Binary Exponentiation : https://cp-algorithms.com/algebra/binary-exp.html

#include<bits/stdc++.h> 
using namespace std;
#define int long long

// Time Complexity : O(log(b)) [ b is the power of a]

// This is to find : ( A ^ B )  , Where A and B are very large numbers 
// Here we are finding (A^B) % N 

int binExpo(int a, int b, int n) {
    if(b == 0) return 1;
    int temp = binExpo(a,b/2,n);
    temp  = temp * temp % n;
    if(b%2 == 1) {
        temp = a * temp % n;
    }
    return temp;
}

signed main() {
    int a , b , n;
    cin >> a >> b >> n;
  
    cout << binExpo(a,b,n);
}







