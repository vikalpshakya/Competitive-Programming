
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

// TC = root n

// intution : Every prime number can be expressed in the form 6k+1;

bool is_prime(int n){
    if(n<=1) return 0;
    if(n<=3) return 1;
    if(n%2==0 || n%3==0) return 0;
    
    for(int i=5; i<sqrt(n); i+=6){
        if(n%i || n%i+2) return 0;
    }
    return 1;
}


int main() {
    int n; cin >> n;
    cout << (isPrime(n) ? "YES\n" : "NO\n" ) ;
}
