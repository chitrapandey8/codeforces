#include <bits/stdc++.h>
using namespace std;

int main() {

        int a; cin>>a;
        int i; cin>>i;

        vector<int> arr(a);
        for(auto &x: arr){
            cin>>x;
        }
        
        int ele = arr[i-1];
        int cnt = 0;
        for(int x: arr){
            if(x > 0 && x >= ele){
                cnt++;
            }
        }
        cout<<cnt<<endl;
        
    return 0;
}