#include <bits/stdc++.h>
using namespace std;

int main() {
    char s; cin>>s; int n; cin>>n;
    vector<int> arr;
    for(int i = 0; i<n; i++){
        int a; cin>>a;
        arr.push_back(a);
    }

    for(int x: arr){
         for(int i = 0; i<x; i++){
            cout<<s;
         }
         cout<<endl;
    }

    return 0;
}