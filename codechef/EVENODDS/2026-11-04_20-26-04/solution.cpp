#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        
        for(int i=0; i<n ; i++)
        {
            cin>>a[i];
        }
        int evn=0;
        int od=0;
        int ans = 0;

        for(int i = 0; i < n; i++) {
            int od = 0;

            for(int j = i; j < n; j++) {
                if(a[j] % 2 != 0) {
                    od++;
                }

                if(od % 2 == 0) {
                    ans = max(ans, j - i + 1);
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
