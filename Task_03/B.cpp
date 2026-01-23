#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    int total_points = 2 * n + 1;
    vector<int> r(total_points + 1); // to make the coordinates like (r1 to r2n+1)
    for (int i = 1; i <= total_points; ++i)
        cin >> r[i];
    for (int i = 2; i <= 2*n; i += 2) {
        if (k > 0) {
            if (r[i] - 1 > r[i - 1] && r[i] - 1 > r[i + 1]) {
                r[i]--;
                k--;
            }
        }
    }

    for (int i = 1; i <= total_points; ++i)
        cout << r[i] << " ";
    cout << endl;

    return 0;
}
