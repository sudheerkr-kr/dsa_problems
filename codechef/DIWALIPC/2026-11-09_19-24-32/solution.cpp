#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int p,d,k,b;
        cin>>p>>d>>k>>b;
        if(p+d*k <=b){
            cout<<"yes"<<endl;
            
        }
        else{
            cout<<"no"<<endl;
            
        }
        
    }
    return 0;
}
