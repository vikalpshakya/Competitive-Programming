/* Problem Link: https://cses.fi/problemset/task/1618

Approach : we need to basically convert the number is 2^x * 5^y , and ultimately minimun of x and y , would be the answer
          , it's obvious that the value of x would always be greater than y , so we can just find the value of y and print it.
  
Proff    : N! = M * 10^z
              = M * (2^z * 5^z)
          So therefore , Number of trailing zeros is = Z
*/

// Time complexity : Log(N) 

#include<bits/stdc++.h>
using namespace std;

int TrailingZeros(int n) {
    if(n < 5) return 0; 
    int count = 0;
    while(n!=0) {
        count += (n/5);
        n /= 5;
    }
    return count ;
}


int main() {
    int n; cin >> n;
    cout << TrailingZeros(n) << "\n" ;
}





