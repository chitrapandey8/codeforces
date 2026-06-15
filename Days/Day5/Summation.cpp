#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    vector<int> arr;
    for(int i = 0; i<n; i++){
        long long  a; cin>>a;
        arr.push_back(a);
    }

    
    long long sum = 0;
    for(int x: arr){
  sum += x;
    }

    long long ans =  abs(sum);
    cout<<ans<<endl;
    return 0;
}