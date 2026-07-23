#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    vector<int> arr;
    for(int i =0; i<n; i++){
        int a;cin>>a;
        arr.push_back(a);
    }

    
    int total_cnt = 0;
    int max_ele = arr[0];
    for(int i =0;i <n; i++){
        if(arr[i] > max_ele){
            total_cnt++;
            
        }
    }
    return 0;
}