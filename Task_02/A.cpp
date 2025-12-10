#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s="", c="";
        cin >> s;
        int count = 0;
        count +=2;
        c += s[0];
        for(int i = 1; i < n; i++){
            if(c.find(s[i]) != string::npos){
                count +=1;
            } else {
                count +=2;
            }
            c += s[i];
        }
        cout << count << endl;
    }
    return 0;
}