#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);

        long long sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }

        long long mini = LLONG_MAX;

        for (int i = 0; i < n - 1; i++) {
            mini = min(mini, (a[i] + a[i + 1]) / 2);
        }

        cout << sum - mini << endl;
    }

    return 0;
}

