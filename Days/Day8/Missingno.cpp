#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    vector<int> arr;
    for(int i = 0;i <n-1; i++){
        int a; cin>>a;
        arr.push_back(a);
    }
    
    unordered_set<int> hs;
    for(int x: arr){
      hs.insert(x);
    }

    
    int num = 1;
    while(hs.count(num)){
        num++;
    }
    cout<<num<<endl;

    
    return 0;
}