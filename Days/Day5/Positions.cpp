#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    vector<int> A;
    for(int i = 0; i<n;i++){
        int a; cin>>a;
        A.push_back(a);
    }
    for(int i = 0; i<n; i++){
        if(A[i] <= 10){
           cout<<"A"<<"["<<i<<"]"<<" "<<"="<<" "<<A[i]<<endl;
        }
    }
    return 0;
}