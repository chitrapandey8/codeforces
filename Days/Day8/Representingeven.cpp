#include <bits/stdc++.h>
using namespace std;

int main() { 
    int t; cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
         bool flag = true;
        if(n%2 != 0 && (k %2 == 0 && k>1)){
            cout<<"NO"<<endl;
            flag =false;
        }
          
        if(n%2 == 0 && k%2 != 0){
            cout<<"NO"<<endl;
            flag =false;
        }
            
         if(flag){
             cout<<"YES"<<endl;
         }

    }
    return 0;
}