
// Our Idea is to count the number of factors and , and the end if the number of factors equals to 2 , then it means it's a prime number 


#include <bits/stdc++.h>
using namespace std;

// Time complexity: O(sqrt(n))

bool isPrime(int n) {
  int count = 0;
    for(int i = 1; i *i <= n; i++) {
        if(n%i == 0) {
            count += 2;
            if(n/i == i) 
                count--;
        }
    }
    return count == 2;
}

int main() {
    int n; cin >> n;
    cout << (isPrime(n) ? "YES\n" : "NO\n" ) ;
}
