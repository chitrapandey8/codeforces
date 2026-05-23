#include <bits/stdc++.h>
using namespace std;

int noofones(int n){
    int cnt = 0;
    while(n){
        cnt += n&1;
        n =  n>>1;
    }
    return cnt;
}

int poww(int a, int n){
     if(n == 0){
        return 1;
     }

    return a*poww(a,n-1);
}

int main() {
    int t; cin>>t;

    while(t--){
       int n; cin>>n;
       int ans = 0;
       int cnt = noofones(n);
       int pow = 0;
       while(cnt){
        ans += poww(2,pow);
        cnt--;
        pow++;
       }
       cout<<ans<<endl;
    }

    return 0;
}