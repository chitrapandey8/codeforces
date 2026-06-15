#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;  cin>>n;
    vector<int> arr;
    for(int i = 0; i<n; i++){
        int a; cin>>a;
        arr.push_back(a);
    }
    for(int i = 0; i<n; i++){
        if(arr[i] < 0){
            arr[i] = 2;
        }else if(arr[i] > 0){
            arr[i] = 1;
        }else if(arr[i] == 0){
            arr[i] = 0;
        }
    }

    for(int x: arr){
        cout<<x<<" ";
    }
    return 0;
}