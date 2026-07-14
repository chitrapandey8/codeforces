#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    vector<int> arr;
    for(int i = 0; i<n; i++){
        int a; cin>>a;
        arr.push_back(a);
    }

    long long cnt=  0;
    vector<int> presum(n);
    presum[0] = arr[0];

    
    for(int i = 1; i< n; i++){
        if(presum[i-1] > arr[i]){
            cnt += abs(presum[i-1] - arr[i]);
            presum[i] = presum[i-1];
        }else{
            presum[i] = arr[i];
        }
    }
    
    cout<<cnt<<endl;
    return 0;
}