#include <iostream>
#include <cctype>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    string seen = "";

    for (int i = 0; i < n; i++) {
        char ch = tolower(s[i]);   // نخلي الحرف small
        if (seen.find(ch) == string::npos) {
            seen += ch;            // نضيفه لو مش موجود
        }
    }

    if (seen.length() == 26)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}