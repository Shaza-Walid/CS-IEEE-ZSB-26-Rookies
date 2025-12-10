#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        int target;
        if(arr[0] == arr[1])
            target = arr[0];
        else if(arr[0] == arr[2])
            target = arr[0];
        else
            target = arr[1];

        for (int i = 0; i < n; i++) {
            if(arr[i] != target) {
                cout << i+1 << endl;
                break;
            }
        }

    }

    return 0;
}