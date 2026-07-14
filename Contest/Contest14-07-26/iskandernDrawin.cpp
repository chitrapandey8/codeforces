#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        int cnt = 0;
        int maxcnt = 0;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == '#'){
                cnt++;
                maxcnt = max(maxcnt, cnt);
            }else{
                cnt = 0;
            }
        }
        
        int ans = 0;
        if(maxcnt%2 == 0){
            ans = maxcnt/2;
        }else{

            ans = maxcnt/2+1;
        }
        cout<<ans<<endl;
       
    }
    return 0;
}