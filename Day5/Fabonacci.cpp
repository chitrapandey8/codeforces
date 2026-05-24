#include <bits/stdc++.h>
using namespace std;

long long Fabonacci(int n){
    if(n == 0){
        return 0;
    }

    if(n == 1){
        return 1;
    }

    return Fabonacci(n-1) + Fabonacci(n-2);

}

int main() {
    int n; cin>>n;
    long long ans = Fabonacci(n-1);
    cout<<ans<<endl;

    return 0;
}