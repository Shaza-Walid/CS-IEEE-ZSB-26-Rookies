#include <iostream>

using namespace std;

float BalanceCalc(int x, float y){
    if(x%5!=0 || (x+0.5)>y)
        return y;
    else
        return y-(x+0.5);    
}

int main(){
    int x;
    float y;
    cin >> x >> y;
    printf("%.2f\n", BalanceCalc(x, y));
    return 0;
}