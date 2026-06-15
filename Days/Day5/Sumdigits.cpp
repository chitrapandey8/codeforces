#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    long long N; cin>>N;
    long long sum = 0;
    while(N){
     int last_digit = N%10;
     sum += last_digit;
     N = N/10;
    }
    cout<<sum<<endl;
    return 0;
}