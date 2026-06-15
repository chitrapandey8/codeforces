#include <bits/stdc++.h>
using namespace std;

int main() {


    long long n; cin>>n;
    long long m; cin>>m;
    long long a; cin>>a;
    
    long long  a1 = (n+(a-1))/a;
    long long a2 = (m+(a-1))/a;

    long long ans  =  a1*a2;
    cout<<ans<<endl;
    return 0;
}