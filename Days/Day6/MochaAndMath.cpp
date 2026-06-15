#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
       int n; cin>>n;
    vector<int> arr;
    for(int i =0; i<n; i++){
        int a; cin>>a;
        arr.push_back(a);
    }

    int ans = arr[0];
    for(int i = 1; i<n; i++){
        ans = ans&arr[i];
    }
    cout<<ans<<endl;
    }
    
    return 0;
}