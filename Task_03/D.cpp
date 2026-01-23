#include <iostream>

using namespace std;

int digitNums(int x, int y){
    if (y <= 1)
        return -1;
    int dn =0;
    while(x>0){
        x/=y;
        dn++;
    }
    return dn;
}

int main(){
    int n,k;
    cin >> n >> k;
    cout << digitNums(n,k) << endl;
    return 0;
}