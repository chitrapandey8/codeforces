#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m; cin>>n>>m;
    int cnt = 0;
    for(int a = 0; a<=1000; a++){
        for(int b = 0; b<=1000; b++){
           int nn = a*a + b;
           int mn = a + b*b;
           if(nn == n && mn == m){
            cnt++;
           }
        }
    }
    cout<<cnt<<endl;
    return 0;
}