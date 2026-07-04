#include <bits/stdc++.h>
using namespace std;

int main() {
    int n1, n2; cin>>n1>>n2;
    int cnt =0;
    for(int i = 0; i<=1000; i++){
        for(int j = 0; j<= 1000; j++){
            int n = i*i + j;
            int m = i + j*j;
            if((n == n1) && (m == n2)){
              cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}