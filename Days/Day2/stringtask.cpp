#include <bits/stdc++.h>
using namespace std;


int main() {

    string s; cin>>s;
    int n = s.size();
    string ans;
    ans = "";
    for(int i = 0; i<n; i++){
        char c = tolower((unsigned char) s[i]);

        if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y'){
            ans += "."+string(1,c);
        }
    
    }
    cout<<ans;

    return 0;
}