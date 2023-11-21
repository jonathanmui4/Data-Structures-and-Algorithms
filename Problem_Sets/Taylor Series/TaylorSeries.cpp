//
//  TaylorSeries
//
//  Created by Jonathan Mui on 20/11/23.
//

#include <iostream>

// x * e^n
double e(int x, int n) {
    static double s;
    if (n == 0) {
        return s;
    }
    else {
        s = 1 + x * s / n;
        return e(x, n-1);
    }
}

double e_iterative(int x, int n){
    double s = 1;
    double num = 1;
    double den = 1;
    
    for (int i = 1; i <= n; i++) {
        num *= x;
        den *= i;
        s += num/den;
    }
    
    return s;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Recursive");
    printf("%lf \n", e(1, 10));
    printf("Iterative");
    printf("%lf \n", e_iterative(1, 10));
    return 0;
}
