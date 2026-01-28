#include <iostream>

using namespace std;

int Factorial (int n){
    if(n==1 || n==0) return 1;
    else return n*Factorial(n-1);
}

int main() {
    int N;
    cin >> N;
    cout << Factorial(N) << endl;
    return 0;
}