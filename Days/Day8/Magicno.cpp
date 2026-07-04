#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    string s = "";
    
    while(n){
        int lastt = n%10;
        s += to_string(lastt);
        n = n/10;
    }
    reverse(s.begin(), s.end());
    if(s[0] != '1'){
        cout<<"NO"<<endl;
        return 0;
    }

    for(int i = 1;i<s.size(); i++){
        if((s[i] == '4') &&  (s[i+1] == '4') &&  (s[i+2] == '4')){
            cout<<"NO"<<endl;
            return 0;
        }else if((s[i] != '1')  && (s[i] != '4')){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    
    cout<<"YES"<<endl;
    return 0;
}