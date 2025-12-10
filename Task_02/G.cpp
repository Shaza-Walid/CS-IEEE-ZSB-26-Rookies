#include <iostream>
#include <string>
using namespace std;

int main() {
    int q;
    cin >> q;
    while (q--) {
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;
        bool ok = true;
        for (char c = 'a'; c <= 'z'; c++) {
            int cnt_s = 0, cnt_t = 0;
            for (int i = 0; i < n; i++)
                if (s[i] == c) 
                    cnt_s++;
            for (int i = 0; i < n; i++)
                if (t[i] == c) 
                    cnt_t++;
            if (cnt_s != cnt_t) {
                ok = false;
                break;
            }
        }

        if (ok)
             cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    return 0;
}
