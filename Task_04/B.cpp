#include <iostream>

using namespace std;

void Algorithm(long long n) {
    cout << n << " ";
    if (n == 1) return;
    if (n % 2 == 0) Algorithm(n / 2);
    else Algorithm(3 * n + 1);
}

int main() {
    
    long long n;
    cin >> n;
    if(n<=0) return 0;
    Algorithm(n);
}