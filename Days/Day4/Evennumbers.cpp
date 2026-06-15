#include <bits/stdc++.h>
using namespace std;

void Even(int n){
    if(n == 0){
        return;
    }
    Even(n-2);
    cout<<n<<endl;
}

int main() {
    int n; cin>>n;
    if(n == 1){
        cout<<-1<<endl;
        return 0;
    }
    if(n%2 == 0){
        Even(n);
    }else{
        Even(n-1);
    }
    return 0;
}