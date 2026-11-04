#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin>>n;
    int ans;

    if(n >= 5) {
        ans = n - 4;
    }
    else {
        ans = n;
    }

    cout << ans;
    return 0;
}
