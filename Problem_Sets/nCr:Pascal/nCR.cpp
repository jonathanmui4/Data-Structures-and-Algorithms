//
//  main.cpp
//  nCr
// Recursive algorithm for nCr using Pascal's triangle
//
//  Created by Jonathan Mui on 21/11/23.
//

#include <iostream>

int nCr (int n, int r) {
    if (n == r || r == 0) {
        return 1;
    }
    else {
        return nCr(n-1, r-1) + nCr(n-1, r);
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << nCr(4,2) << "\n";
    return 0;
}
