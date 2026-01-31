#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a=0, b=0, c=0;
        for(int i=2; i*i<=n; i++){
            if(n%i==0){
                a=i;
                n/=i;
                break;
            }
        }
        for(int i=a+1; i*i<=n; i++){
            if(n%i==0){
                b=i;
                c=n/i;
                break;
            }
        }
        if(a>=2 && b>=2 && c>=2 && a!=b && b!=c && a!=c){
                cout << "YES" << endl;
                cout << a << " " << b << " " << c << endl;
            }else{
                cout << "NO" << endl;
            }
        }
    return 0;
}
