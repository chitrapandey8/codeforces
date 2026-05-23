#include <bits/stdc++.h>
using namespace std;

int main() {
    while(1){
     int n,m; cin>>n>>m;
    if(n <= 0 || m <= 0){
        break;
    }
    
    int sum = 0;
    for(int i = min(n,m); i<=max(n,m); i++){
     sum += i;
    }
    
    
    for(int i = min(n,m); i<=max(n,m); i++){
        cout<<i<<" "; 
    }
    cout<<"sum"<<" "<<"="<<sum<<endl;
    }
    
    return 0;
}