#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
    int n,k; cin>>n>>k;
    string s; cin>>s;
    for(int i=1; i<=n-k; i++){
         if(s[i-1] == '1'){
            s[i-1] = '0';

             if(s[i+k-1] == '1'){
               s[i+k-1] = '0';
              }else{
                s[i+k-1] = '1';
         }      
        }
    }
    
    int i = 0;
    while(i<n && s[i] != '1'){
       i++;
    }
    
    if(i == n){
     cout<<"YES"<<endl;
    }else{
    cout<<"NO"<<endl;
    }

    }
    return 0;
}