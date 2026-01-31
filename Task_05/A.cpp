#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        int divisor_count = 0;
        for(int i=1; i*i<=x; i++){    //i*i <= x to avoid counting sqrt twice
            if(x%i==0){
                divisor_count++;
                if(i*i!=x)        //if the divisors are the same, count only once  (4*4=16)
                    divisor_count++;
            }
        }
        cout << divisor_count << endl;
    }
    return 0;
}