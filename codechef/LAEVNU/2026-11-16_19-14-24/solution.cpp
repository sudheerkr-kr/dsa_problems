#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    string s;
    cin >> s;

    vector<int> digits;

    // Extract digits
    for(char ch : s) {
        if(isdigit(ch)) {
            digits.push_back(ch - '0');
        }
    }

    if(digits.empty()) {
        cout << -1;
        return 0;
    }

    // Find smallest even digit
    int last = -1;

    for(int x : digits) {
        if(x % 2 == 0) {
            if(last == -1 || x < last) {
                last = x;
            }
        }
    }

    if(last == -1) {
        cout << -1;
        return 0;
    }

    // Remove one occurrence of selected even digit
    auto it = find(digits.begin(), digits.end(), last);
    digits.erase(it);

    // Sort remaining digits in descending order
    sort(digits.rbegin(), digits.rend());

    // Print answer
    string ans = "";

    for(int x : digits) {
        ans += char(x + '0');
    }

    ans += char(last + '0');

    // Remove leading zeros
    int pos = ans.find_first_not_of('0');

    if(pos == string::npos) {
        cout << 0;
    }
    else {
        cout << ans.substr(pos);
    }

    return 0;
}
