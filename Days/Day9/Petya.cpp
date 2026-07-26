#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    int size = n;
    unordered_map<int, int> mp;
    int cnt = 1;
    while(n--){
       int a; cin>>a;
       mp.insert({a, cnt});
       cnt++;
    }

    vector<int> arr(size);
    for(int i = 0; i<size; i++){
        arr[i] = mp[i+1];
    }

    for(int x: arr){
        cout<<x<<" ";
    }
    return 0;
}