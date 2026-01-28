#include <iostream>
#include <string>

using namespace std;

string s1, s2;
int target;
int correct = 0;
int total = 0;

void solve(int index, int pos) {
    if (index == s2.size()) {
        total++;
        if (pos == target)
            correct++;
        return;
    }
    if (s2[index] == '+')
        solve(index + 1, pos + 1);
    else if (s2[index] == '-')
        solve(index + 1, pos - 1);
    else { // '?'
        solve(index + 1, pos + 1);  // treat '?' as '+'
        solve(index + 1, pos - 1);  // treat '?' as '-'
    }  
}

int main() {
    cin >> s1 >> s2;
    target = 0;
    for (char c : s1) {
        if (c == '+') target++;
        else target--;
    }

    solve(0, 0);
    // probability = correct answers / total total possibilities
    double probability = (double) correct / total;
    cout.precision(12);
    cout << probability << endl;

    return 0;
}

// This code reads two strings representing sequences of '+' and '-' signs.
// The first string is the target sequence, and the second string may contain
// '?' characters that can represent either '+' or '-'.
// The program calculates the probability that the second sequence can match
// the target sequence by replacing '?' with either '+' or '-'.


//how the code works:
// 1. It reads two input strings, s1 and s2.
// 2. It calculates the target position based on the first string (s1).
// 3. It uses a recursive function 'solve' to explore all possible interpretations
//    of the second string (s2), counting how many interpretations lead to the
//    target position.
// 4. Finally, it computes and prints the probability of matching the target position.

//solve function explanation:
// - The function takes the current index in s2 and the current position (pos).
// - If the index reaches the end of s2, it checks if the current position matches
//   the target and updates the counts accordingly.
// - If the current character in s2 is '+', it increments the position and recurses
// - If it's '-', it decrements the position and recurses.
// - If it's '?', it explores both possibilities by recursing with both '+' and '-'.