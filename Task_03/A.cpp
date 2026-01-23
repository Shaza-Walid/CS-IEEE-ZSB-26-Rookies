#include <iostream>

using namespace std;

int AttackNumbers(int h,int a){
    int num = 0;
    while(h>0){
        h-=a;
        num++;
    }
    return num;
}

int main(){
    int h,a;
    cin >> h >> a;
    cout << AttackNumbers(h,a) << endl;
    return 0;
}