#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
    vector<int> arr;
    for(int i = 0; i<n; i++){
        int a; cin>>a;
        arr.push_back(a);
    }
    int ans = INT_MAX;
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
             ans = min(ans, (arr[i]+arr[j]+(j+1)-(i+1)));
        }
    }
    cout<<ans<<endl;
    }
    return 0;
}