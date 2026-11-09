
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;

    while(t--) {
        string s;
        int k;
        cin >> s >> k;

        string st;

        for(int i = 0; i < s.size(); i++) {

            while(!st.empty() &&
                  st.back() > s[i] &&
                  st.size() - 1 + (s.size() - i) >= k) {

                st.pop_back();
            }

            st.push_back(s[i]);
        }

        while(st.size() > k) {
            st.pop_back();
        }

        cout << st << endl;
    }

    return 0;
}
