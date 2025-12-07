#include <iostream>
using namespace std;

int main()
{
    int t;
    char c;
    cin >> t;
    while(t--){
        cin >> c;
        switch(c){
            case 'c':
            case 'o':
            case 'd':
            case 'e':
            case 'f':
            case 'r':
            case 's':
                cout << "YES" << endl;
                break;
            default:
                cout << "NO" << endl;
                break;
        }
    }
    return 0;
}