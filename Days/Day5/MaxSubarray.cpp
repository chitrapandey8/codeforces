#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    
    while(t--){
        int n; cin>>n;
        vector<int> arr;
        for(int i = 0; i <n; i++){
            int a; cin>>a;
            arr.push_back(a);
        }
        for(int i = 0; i<n; i++){
            for(int j = i; j <n; j++){
                int ans = INT_MIN;
               for(int k = i; k<= j; k++){
                ans = max(ans, arr[k]);
               }
               cout<<ans<<" ";
            }
            
        }
        cout<<endl;
    }
    return 0;
}