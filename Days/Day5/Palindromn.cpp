#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    vector<int> arr;
    for(int i= 0; i<n; i++){
          int a; cin>>a;
          arr.push_back(a);
    }
    int i = 0; int j = n-1;
    while(i< j){
        if(arr[i] != arr[j]){
            cout<<"NO"<<endl;
            return 0;
        }
        i++;
        j--;
    }
    if( i >= j){
        cout<<"YES"<<endl;
    }
    return 0;
}