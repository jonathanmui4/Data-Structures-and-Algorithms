//
//  main.cpp
//  Fibonacci
//
//  Created by Jonathan Mui on 20/11/23.
//

#include <iostream>

// Memoization to reduce recursive function calls of fib -> from O(2^n) to O(n)
int fibs[10];

int fib(int n){
    if (n <= 1) {
        fibs[n] = n;
        return n;
    }
    else {
        if (fibs[n-2] == -1) {
            fibs[n-2] = fib(n-2);
        }
        if (fibs[n-1] == -1) {
            fibs[n-1] = fib(n-1);
        }
        return fib(n-1) + fib(n - 2);
    }
}

int main(int argc, const char * argv[]) {
    for (int i = 0; i < 10; i++) {
        fibs[i] = -1;
    }
    std::cout << "Hello, World!\n";
    printf("%d \n", fib(8));
    return 0;
}
