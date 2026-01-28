#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string s;
vector<string> results;
vector<bool> used; // to track used characters

void generate(string &current) {
    if (current.size() == s.size()) {
        results.push_back(current);
        return;
    }

    for (int i = 0; i < s.size(); i++) {
        if (used[i]) continue; // if already used, skip
        // to avoid duplicates
        if (i > 0 && s[i] == s[i-1] && !used[i-1]) continue;

        used[i] = true;
        current.push_back(s[i]);
        generate(current);
        current.pop_back();
        used[i] = false;
    }
}

int main() {
    cin >> s;
    sort(s.begin(), s.end()); // to avoid duplicates
    used.assign(s.size(), false);

    string current = "";
    generate(current);

    cout << results.size() << endl;
    for (auto &str : results)
        cout << str << endl;

    return 0;
}


// This code generates all unique permutations of a given string.
//how the code works:
// 1. It reads an input string.
// 2. It sorts the string to handle duplicates.
// 3. It uses a recursive function 'generate' to build permutations by
//    adding one character at a time, while tracking used characters.
// 4. It stores unique permutations in a vector and prints them at the end.

//generate function explanation:
// - It checks if the current permutation is complete (length matches input string).
// - It iterates through each character in the input string.
// - It skips characters that are already used or would create duplicates.
// - It marks the character as used, adds it to the current permutation,
//   and recursively calls itself to continue building the permutation.
// - After returning from recursion, it backtracks by removing the character and marking it as unused.
