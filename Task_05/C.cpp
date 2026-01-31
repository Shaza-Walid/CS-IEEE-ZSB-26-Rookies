#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << n / 2 << '\n';  //output is always n divided by 2 as it is the maximum number of pairs
    }
    return 0;
}
