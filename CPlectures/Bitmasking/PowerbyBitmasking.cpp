#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 5; int n = 3;
    int ans = 1;
    while(n){
        int last_bit = n&1;
        if(last_bit){
            ans  = ans*a;
        }
        a = a*a;
        n = n>>1;
    }
    cout<<ans;
    return 0;
}