#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> arr;
        for(int i = 0; i<n; i++){
            int a; cin>>a;
            arr.push_back(a);
        }
          
        int cnt = 1;
        int num1 = arr[0];
        int num2 = 0;
        for(int i = 1; i<arr.size(); i++){
            if(arr[i] == num1){
                cnt++;
            }else{
              num2 = i;
            }
        }
        if(cnt > 1){
            cout<<num2+1<<endl;
        }else{
            cout<<1<<endl;
        }
    }
    return 0;
}