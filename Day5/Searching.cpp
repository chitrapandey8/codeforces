#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;  
    vector<int> arr;
    for(int i = 0; i<n; i++){
        int a; cin>>a;
        arr.push_back(a);
    }
    int X; cin>>X; 

    int i = 0;
    while(i<n){
        if(arr[i] == X){
            cout<<i<<endl;
            return 0;
        }
        i++;
    }
    if(i == n){
        cout<<-1<<endl;
    }

    




    return 0;
}