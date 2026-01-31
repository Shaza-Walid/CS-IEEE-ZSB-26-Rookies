#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    long long X;
    cin >> X;
    long long a=1, b=X;
    for(long long i=1; i*i<=X; i++){ // i*i <= x to avoid double calculation as i and j are paired factors
        if (X % i == 0) {            // Check if i is a factor of X (first factor)
            long long j = X / i;     // the second factor (i*j = X) 
            if (__gcd(i, j) == 1) {
                if (max(i, j) < max(a, b)) {
                    a = i;
                    b = j;
    }}}}
    cout << a << " " << b << "\n";
    return 0;
}

//__gcd is a built-in function in C++14 that computes the greatest common divisor of two numbers.
//The loop iterates only up to the square root of X to find factor pairs efficiently.
// This ensures we consider each pair of factors (i, j) only once.