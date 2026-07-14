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
        
        bool flag =  false;
        for(int i = 0; i<n-1; i++){
            if(arr[i] > arr[i+1]){
                flag = true;
            }
        }

        bool flag2 = false;
        if(flag == false){
          cout<<"YES"<<endl;
        }else{
            if(arr[0] == 1 && arr[1] == 1){
                 flag2 = true;
             }
              int max_ele = *max_element(arr.begin(), arr.end());
             if(max_ele < n+1){
                flag2 = true;
             }
            // for(int i = 0; i<n; i++){
                
            // }

        cout<<"2"<<endl;
        if(flag2){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    
    }

    return 0;
}