// Problem Statement: You are given two rectangles with their lower-left and upper-right coordinates. 
//   You have to find the area of the intersection and union of the rectangles. Both rectangles are axis-aligned.

// Solution:- 
// intution is just to make different possible cases and to observe the pattern.


// For finding the intersection of the rectangles, the following gives the endpoints of the diagonal:

// (X_5 = max(X_1, X_3))
// (Y_5 = max(Y_1, Y_3))
// (X_6 = min(X_2, X_4))
// (Y_6 = min(Y_2, Y_4))
// For the rectangle to exist, (X_5 <= X_6) and (Y_5 <= Y_6).

// Area of union of rectangles would be: Sum of the area of rectangles - Area of the intersection of rectangles.



#include <bits/stdc++.h>
using namespace std;


int main() {
    
    int t=1;
    cin >> t;
    while (t--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int x3, y3, x4, y4;
        cin >> x3 >> y3 >> x4 >> y4;
        int a1 = max(x1, x3), b1 = max(y1, y3);
        int a2 = min(x2, x4), b2 = min(y2, y4);
        int ari = 0;
        if(a1 <= a2 && b1 <= b2) {  // to check if our new rectangle is valid or not
            ari = (a2 - a1) * (b2 - b1);
        }
        int ar1 = (x2 - x1) * (y2 - y1);
        int ar2 = (x4 - x3) * (y4 - y3);
      
        cout << ari << " " << ar1 + ar2 - ari << "\n";
    }
    return 0;
}


