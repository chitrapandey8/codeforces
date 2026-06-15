#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    vector<int> arr;
    for(int i = 0; i<n ;i++){
        int a; cin>>a;
        arr.push_back(a);
    }
    

    int maxi = *max_element(arr.begin(), arr.end());
    cout<<maxi<<endl;
    return 0;
}