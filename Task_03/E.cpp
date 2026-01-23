#include <iostream>

using namespace std;

string smallestLexicographical(int a, int b){
    if (a <= b)
        return string(b,char('0'+a));
    else
        return string(a,char('0'+b));
}

int main(){
    int a,b;
    cin >> a >> b;
    cout << smallestLexicographical(a,b) << endl;
    return 0;
}