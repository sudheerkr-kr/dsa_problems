
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin >> n;

    string s;
    cin >> s;

    int count = 0;
    int maxCount = 0;

    int start = -1;
    int ansStart = -1, ansEnd = -1;

    for(int i = 0; i < n; i++) {

        if(s[i] == 'm') {
            if(count == 0) {
                start = i;
            }

            count++;
        }
        else {
            if(count > maxCount) {
                maxCount = count;
                ansStart = start;
                ansEnd = i - 1;
            }

            count = 0;
        }
    }

    // Check the last group
    if(count > maxCount) {
        maxCount = count;
        ansStart = start;
        ansEnd = n - 1;
    }

    cout << ansStart << " " << ansEnd << endl;

    return 0;
}
